/*
*
* This line notifies the preprocessor to
* include in the program the contents of
* the input / output stream header <iostream>*/
#include "Ch03.h"


Ch03_MyAccount::Ch03_MyAccount(const string& ConstructorName) :Account_Name{ ConstructorName }
{
	cout << "====================Ch03_Begin====================" << endl;
}

Ch03_MyAccount::Ch03_MyAccount(const string& ConstructorName, const uint32_t ConstructorBalance) : Account_Name{ ConstructorName },
Account_Balance{ ConstructorBalance }
{
	//No need, done with initializer list
}

Ch03_MyAccount::Ch03_MyAccount() :Account_Name{ "Default" }, Account_Balance{ 0 }
{
	//The Default constructor with no parameters
}

Ch03_MyAccount::~Ch03_MyAccount()
{
	cout << "====================Ch03_Terminate================" << endl;
}

/* We declared member function getName as const because in the process of returning
	the name the function does not, and should not, modify the Account object on which it’s called.
*/
string Ch03_MyAccount::GetName(void) const
{
	return Account_Name;
}

/// <summary>
/// 
/// </summary>
/// <param name="Name"></param>
void Ch03_MyAccount::SetName(const string& Name)
{
	Account_Name = Name;
}

uint32_t Ch03_MyAccount::GetBalance(void)
{
	return Account_Balance;
}

/// <summary>
/// 
/// </summary>
/// <param name="WithdrowValue"></param>
/// <returns></returns>
uint32_t Ch03_MyAccount::Withdrow(uint32_t WithdrowValue)
{
	if (WithdrowValue > 0)
	{
		if (Account_Balance > (WithdrowValue + ServiceFees))
		{
			Account_Balance -= (WithdrowValue + ServiceFees);
			cout << "Done Withdrowing your requested value" << endl;
			cout << "Your Current Balance Value is: " << Account_Balance;
		}
		else
		{
			cout << "Sorry, Your account dosen't have the required amount" << endl;
		}
	}
	else
	{
		cout << "Sorry, Your entered data is wrong" << endl;
	}

	return WithdrowValue;
}
/// <summary>
/// 
/// </summary>
/// <param name="DepositeValue"></param>
void Ch03_MyAccount::deposite(uint32_t DepositeValue)
{
	if (DepositeValue > 0)
	{
		Account_Balance += DepositeValue - ServiceFees;
		cout << "Successfully done your operation" << endl;
	}
	else
	{
		cout << "sorry, you have entered a wrong value" << endl;
	}
}

Ch03_Invoice::Ch03_Invoice() :
	PartNumber{ "00" },
	PartDescription{ "Book" },
	PurchasingQuantity{ 20 },
	ItemPrice{ 55 },
	ValueAddedTax{ .20 },
	DiscountRate{ 0 }
{
	//initializer list is better for speed and optimizations and so on
}

Ch03_Invoice::~Ch03_Invoice()
{
}