#pragma once
//Include the library header
#include <string>
#include <iostream>

/* We may use declarations that eliminate the need to repeat the std:: prefix as we did in earlier programs.
 * We can now write cout instead of std::cout, cin instead of std::cin and endl instead of std::endl */
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

//Define a value to be taken as a service-fees after each transaction
const uint8_t ServiceFees = 1;
//0- Introduction to Classes, Objects,Member Functions and Strings
//1- This is the chapter's class which will ocntain all the needed info Default Access for Class Members
//2- Class members are also called attributesand for the data-elements and operations for Functions.
//3- By default, everything in a class is private, unless you specify otherwise.Once you list an
//   access specifier, everything from that point has that access until you list another access specifier.
class Ch03_MyAccount
{
	//Public is an access specifier. Access specifiers are always followed by a colon (:)
	//public defines the public variables and functions  to be used
public:

	/// <summary>
	/// The Chapter Constructor
	/// </summary>
	//- Explicit Keyword: We declared this constructor explicit, because it takes a single parameter
	//  This is important for subtle reasons. For now, just declare all single parameter constructors explicit.
	//- The Constructo does not specify a return type, because constructors cannot return values—not even void.
	//- Also, constructors cannot be declared const (because initializing an object modifies it).
	explicit Ch03_MyAccount(const string& ConstructorName);

	//We did not declare this constructor explicit, because this constructor has more than one parameter.
	Ch03_MyAccount(const string& ConstructorName, const uint32_t ConstructorBalance);

	//There’s No Default Constructor in a Class That Defines a Constructor
	// If you define a custom constructor for a class, the compiler will not create a default constructor for that class.
	//  So we will need to create our own copy to enable us to create an object without Initial Value
	Ch03_MyAccount(); //The Default Constructor
	/// <summary>
	/// The Chapter Destructor
	/// </summary>
	~Ch03_MyAccount();

	/* We declared member function getName as const because in the process of returning
		the name the function does not, and should not, modify the Account object on which it’s called.
	*/
	string GetName(void)const;

	void SetName(const string& Name);

	uint32_t GetBalance(void);


	uint32_t Withdrow(uint32_t WithdrowValue);

	void deposite(uint32_t DepositeValue);
	/*
	* Private defines the private to the class members and functions
	* private variables and functions can't be called from external classes
	* there are some rules for that but in the future
	*/
	//Private is an access specifier. Access specifiers are always followed by a colon (:)
private:
	//Hold the class-Object name
	string Account_Name;
	//Hold the Class-Object Balance
	uint32_t Account_Balance{ 0 }; // data member with default initial value


};


class Ch03_Invoice
{
public:
	Ch03_Invoice();
	~Ch03_Invoice();

private:
	string   PartNumber{ "0" };
	string   PartDescription{ "Books" };
	uint32_t PurchasingQuantity{ 22 };
	uint32_t ItemPrice{ 66 };
	double	 ValueAddedTax{ .2 };
	double	 DiscountRate{ 0 };
};
