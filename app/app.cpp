#include "app.h"
using namespace std;
#include <string>
#include <iostream>

namespace vsite::oop::v8
{
	int input_num(std::istream& input) {
		int n;
		input >> n;
		if (input.fail()) {
			throw not_number();
		}
		return n;
	}

	char input_op(std::istream& input) {
		char c;
		input >> c;
		if ("+/*-"s.find(c) == string::npos){
			throw not_operator();
		}
		return c;
	}

	double calc(double num1, char op, double num2) {
		switch (op) {
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/':
			if (num2 == 0) {
				throw divide_zero();
			}
			else {
				return num1 / num2;
			}
		}
	}
}