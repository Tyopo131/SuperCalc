#include "mathtree.hpp"

double MathTree::calculate() const
{
	double originNumber = this->originNumber;
	tree_t tree = this->tree;
	iterator it = tree.begin();
	for (mathOperations::AppendCalculation calc : tree) {
		originNumber = calc.calculate(originNumber);
	}
	return originNumber;
}
