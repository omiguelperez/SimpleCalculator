#include "iostream"

using namespace std;

class Calculator
{
public:
	Calculator();
	~Calculator();
	double add();
	double subtract();
	double multiply();
	double divide();
	/*getters & setters*/
	double getFirstNumber();
	void   setFirstNumber(double);
	double getSecondNumber();
	void   setSecondNumber(double);
private:
	double firstNumber;
	double secondNumber;
};

Calculator::Calculator() {}

Calculator::~Calculator() {}

/*operations*/

double Calculator::add()
{
	return this->getFirstNumber() + this->getSecondNumber();
}

double Calculator::subtract()
{
	return this->getFirstNumber() - this->getSecondNumber();
}

double Calculator::multiply()
{
	return this->getFirstNumber() * this->getSecondNumber();
}

double Calculator::divide()
{
	return this->getFirstNumber() / this->getSecondNumber();
}

/*getters & setters*/

double Calculator::getFirstNumber()
{
	return this->firstNumber;
}

void Calculator::setFirstNumber(double firstNumber)
{
	this->firstNumber = firstNumber;
}

double Calculator::getSecondNumber()
{
	return this->secondNumber;
}

void Calculator::setSecondNumber(double secondNumber)
{
	this->secondNumber = secondNumber;
}

/*main method*/
int main(int argc, char const *argv[])
{

	return 0;
}
