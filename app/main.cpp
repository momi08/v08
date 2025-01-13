#include "app.h"
using namespace vsite::oop::v8;
// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
	while (true) {
		try {
			double num1 = input_num(std::cin);
			char op = input_op(std::cin);
			double num2 = input_num(std::cin);

			double result = calc(num1, op, num2);
			std::cout << num1 << op << num2 << '=' << result << std::endl;
		}
		catch (const exception& e)
		{
			std::cout << e.what();
			break;
		}
	}
}
