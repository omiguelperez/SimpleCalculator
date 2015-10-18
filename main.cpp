#include "calculator.h"
#include "iostream"

using std::cout;
using std::endl;

/*functions statements*/
void run(Calculator);

/*main method*/
int main(int argc, char const *argv[])
{
	Calculator calculator;
	run(calculator);
	return 0;
}

/*run the application*/
void run(Calculator calculator)
{
	double firstNumber, secondNumber;
	firstNumber = 834.234;
	secondNumber  = 23.23;

	calculator.setFirstNumber(firstNumber);
	calculator.setSecondNumber(secondNumber);

	cout << "The sum is " << calculator.add() << endl;
	cout << "The remainder is " << calculator.subtract() << endl;
	cout << "The product is " << calculator.multiply() << endl;
	cout << "The quotient is " << calculator.divide() << endl;
}