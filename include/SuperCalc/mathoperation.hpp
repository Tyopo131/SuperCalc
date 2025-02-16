#pragma once
#include <concepts>

namespace mathOperations {
	template <typename T>
	concept Numeric = std::integral<T> || std::floating_point<T>;
	enum class Operation {
		ADD,
		SUBTRACT
	};

	struct AppendCalculation { // Do not rely on default values, they may change and break your system!
		double num2 = 0;
		Operation operation = Operation::ADD;

		virtual double calculate(double num1) {
			if (operation == Operation::ADD) return num1 + num2;
			if (operation == Operation::SUBTRACT) return num1 - num2;
		}
	};
	struct Calculation : public AppendCalculation // Do not rely on default values, they may change and break your system!
	{
		double num = 0;
		virtual double calculate() {
			if (operation == Operation::ADD) return num + num2;
			if (operation == Operation::SUBTRACT) return num - num2;
		}
	};
}
