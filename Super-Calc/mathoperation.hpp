#pragma once
namespace MathOperations {
	enum class Operation {
		ADD,
		SUBTRACT
	};
	struct Calculation : AppendCalculation
	{
		double arg2;
	};
	struct AppendCalculation {
		double arg1;
		Operation operation;
	};
}