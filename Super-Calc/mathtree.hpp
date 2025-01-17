#pragma once
#include <vector>
#include "mathoperation.hpp"



class MathTree { // Store a tree-like structure of append operations (MathOperations::AppendCalculation), executed from smallest first to last, and a current number.
	double originNumber;
	std::vector<mathOperations::AppendCalculation> tree; // Store a tree-like structure
	double calculate() const;
public:
	typedef std::vector<mathOperations::AppendCalculation>::iterator iterator;
	typedef std::vector<mathOperations::AppendCalculation> tree_t;
};