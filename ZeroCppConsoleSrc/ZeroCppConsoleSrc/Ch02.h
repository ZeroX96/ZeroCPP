#pragma once
//Include the library header
#include <iostream>


/* Include only the needed functions The std Namespace functions we need
 * We will need include std::before each mention of cout, cin and cerr in a program
 * or using the following way, " using NameSpace::FunctionName "
 *
 * using declarations and the using directive, which will enable you
 * to omit std:: before each use of a name in the std namespace.
 *
 * We may use declarations that eliminate the need to repeat the std:: prefix as we did in earlier programs.
 * We can now write cout instead of std::cout, cin instead of std::cin and endl instead of std::endl */
using std::cout;
using std::cin;
using std::endl;



//this is the chapter's class which will ocntain all the needed info 
class Ch02
{
	//public defines the public variables and functions  to be used
public:

	/// <summary>
	/// The Chapter Constructor
	/// </summary>
	Ch02();

	/// <summary>
	/// The Chapter Destructor
	/// </summary>
	~Ch02();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	void FirstProgramInCpp_PrintingLineOfText(void);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	void ModifyingOurFirstCppProgram(void);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	void AnotherCppProgramAddingIntegers(void);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	void ArithmeticOperations(void);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	void DecisionMakingEqualityAndRelationalOperators(void);

	/*
	* Private defines the private to the class members and functions
	* private variables and functions can't be called from external classes
	* there are some rules for that but in the future
	*/
private:

};