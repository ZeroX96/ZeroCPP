/*
*
* This line notifies the preprocessor to
* include in the program the contents of
* the input / output stream header <iostream>*/
#include "Ch02.h"


Ch02::Ch02()
{
	//This is the constructor of the Ch02 Class
	cout << "Ch02_Begin" << endl;
}

Ch02::~Ch02()
{
	//This is a comment line, 
	//the remaining of this line is ignored by the copmpiler
	//and doesn't generate any object-code
	cout << "Ch02_Terminate" << endl;
}

void Ch02::FirstProgramInCpp_PrintingLineOfText(void)
{
	/*
	* This is also
	* a comment but
	* separated over multiple lines
	* this is done with the aid of the / * * / pair
	*/
	cout << "2.2 First Program in C++: Printing a Line of Text" << endl;
}

void Ch02::ModifyingOurFirstCppProgram(void)
{
	cout << "Message Over";
	cout << "several Lines";
	cout << "But Outputs on the same line" << endl;
}

void Ch02::AnotherCppProgramAddingIntegers(void)
{
	//C-Like Initialization
	int32_t var1 = 0;
	int32_t var2 = 0;
	//List initialization, List initialization is also known as uniform initialization
	uint32_t var3{ 2 };
	uint32_t var4{ 4 };
	//List initialization, The Most Recommended
	uint8_t int1{ 55 };
	uint8_t int2{ 44 };
	uint8_t int3{ 33 };

	cout << "Please put two numbers to be summed" << endl;
	cin >> var1 >> var2;

	cout << "The result is: ";
	cout << var1 + var2 << endl; //sum the two values and print the result

	cout << "The result is: ";
	cout << var3 + var4 << endl; //sum the two values and print the result

	cout << int1 + int2 + int3 << endl;  //sum the three and report the resultl for the user
}

void Ch02::ArithmeticOperations(void)
{
	cout << "4 +3 and 3 - 1  and 9 * 2 and  8 / 2 equal:" << endl;
	cout << (4 + 3) << (3 - 1) << (9 * 2) << (8 / 2) << endl;
}

void Ch02::DecisionMakingEqualityAndRelationalOperators(void)
{
	cout << "Testing the DecisionMaking IF statements" << endl;

	uint16_t var1{ 4 }, var2{ 6 }, var3{ 9 }, var4{ 1 };

	if (var1 > var2)
	{
		cout << "var1 > var2" << endl;
	}
	else
	{
		cout << "var1 < var2" << endl;
	}

	if (var2 < var3)
	{
		cout << "var2 < var3" << endl;
	}
	else
	{
		cout << "var2 < var3";
	}

	if (var3 >= var4)
	{
		cout << "var3 >= var4" << endl;
	}
	else
	{
		cout << "var3 < var4" << endl;
	}
}
