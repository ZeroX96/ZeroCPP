// ZeroCppConsoleSrc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "ZeroCppConsoleSrc.h"

// The parentheses after main indicate that main is a building block called a function.
int main(void)
{
	cout << "Hi S3D " << endl;
	cout << "Hello World!\n";

	//You Must create an object of your class so you can use its public Data
	Ch02 TestCh02;

	//test the class data and functions
	TestCh02.AnotherCppProgramAddingIntegers();
	TestCh02.ArithmeticOperations();
	TestCh02.DecisionMakingEqualityAndRelationalOperators();
	TestCh02.FirstProgramInCpp_PrintingLineOfText();
	TestCh02.ModifyingOurFirstCppProgram();

	return 0;
}
