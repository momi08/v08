#pragma once
#include <iostream>

namespace vsite::oop::v8 
{
	int input_num(std::istream& input);
	char input_op(std::istream& input);
	double calc(double num1, char op, double num2);
	class exception {
	public:
		virtual std::string what() const = 0;
		virtual ~exception() = default;
	};

	class not_number : public exception {
	public:
		std::string what() const override { return "not a number"; }
	};

	class not_operator : public exception {
	public:
		std::string what() const override { return "not an operator"; }
	};

	class divide_zero : public exception {
	public:
		std::string what() const override { return "divide by zero"; }
	};
}