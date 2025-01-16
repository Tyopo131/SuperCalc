#pragma once
#include <vector>
#include "mathoperation.hpp"



class MathTree { // Store a tree-like structure of append operations (MathOperations::AppendCalculation), executed from smallest first to last, and a current number.
	double originNumber;
	std::vector<MathOperations::AppendCalculation> tree; // Store a tree-like structure
	double calculate() {
		
	}
};