#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>

class Functions
{
private:
	float x;
	float y;
public:
	void info(float x_x, float y_y) { x = x_x; y = y_y; }
	float addition() { return x + y; }
	float subtraction() { return x - y; }
	float multiplication() { return x * y; }
	float division() { return x / y; }
	float division_of_integers() {
		int a = x;
		int b = y;
		return a / b;
	}
	float remainder() {
		int a = x;
		int b = y;
		return a % b;
	}
	float degree() { return pow(x, y); }
	float square() { return sqrt(x); }
	float module() { return abs(x); }
};




int main()
{
	Functions function;
	float x, y;
	std::cout << "Please enter first number: ";
	std::cin >> x;
	std::cout << "Please enter second number: ";
	std::cin >> y;
	function.info(x, y);

	std::cout << "What function do you want to use? " << "\n";
	std::cout << "1 - Addition +" << "\n";
	std::cout << "2 - Subtraction - " << "\n";
	std::cout << "3 - Multiplication  *" << "\n";
	std::cout << "4 - Division / " << "\n";
	std::cout << "5 - Division_of_integers // " << "\n";
	std::cout << "6 - Remainder %" << "\n";
	std::cout << "7 - Degree " << "\n";
	std::cout << "8 - Square " << "\n";
	std::cout << "9 - Module " << "\n";
	int number;
	std::cin >> number;
	
	switch (number) {
	case 1:
		std::cout << "Answer: " << function.addition() << "\n";
		break;
	case 2:
		std::cout << "Answer: " << function.subtraction() << "\n";
		break;
	case 3:
		std::cout << "Answer: " << function.multiplication() << "\n";
		break;
	case 4:
		std::cout << "Answer: " << function.division() << "\n";
		break;
	case 5:
		std::cout << "Answer: " << function.division_of_integers() << "\n";
		break;
	case 6:
		std::cout << "Answer: " << function.remainder() << "\n";
		break;
	case 7:
		std::cout << "Answer: " << function.degree() << "\n";
		break;
	case 8:
		std::cout << "Answer: " << function.square() << "\n";
		break;
	case 9:
		std::cout << "Answer: " << function.module() << "\n";
		break;
	}

	
	return 0;
}
