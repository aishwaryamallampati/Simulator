/*
 * Computer Architecture CSE530
 * MIPS pipeline cycle-accurate simulator
 * PSU
 */

#include "static_nt_branch_predictor.h"
#include <cstdio>
StaticNTBranchPredictor::StaticNTBranchPredictor() {
	// TODO Auto-generated constructor stub

}

StaticNTBranchPredictor::~StaticNTBranchPredictor() {
	// TODO Auto-generated destructor stub
}

uint32_t StaticNTBranchPredictor::getTarget(uint32_t PC, int op_Code, int subop_Code) {
	//always return next PC
	return PC + 4;
}

void StaticNTBranchPredictor::update(uint32_t PC, bool take, uint32_t target, int op_Code, int subop_Code) {
	//no metadata to update:D
	return;
}
