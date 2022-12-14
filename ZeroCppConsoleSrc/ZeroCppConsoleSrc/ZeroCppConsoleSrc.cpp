// ZeroCppConsoleSrc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "ZeroCppConsoleSrc.h"
#include <string>
#include <iomanip>
// The parentheses after main indicate that main is a building block called a function.
int main(void)
{
    //CH04
#if CH04
    int32_t integ{ 58 };
    // double average{ static_cast<double>(total) / gradeCounter };
    //static_cast Operator To perform a floating-point calculation with integers
    float floatg = static_cast <float>(54.3);
    ..cout << setprecision(2) << fixed;
    //- For arithmetic, the compiler knows how to evaluate 
    //   only expressions in which the operand types are identical.
    //- In an expression containing values of data types int and double, 
    //   C++ promotes int operands to double values.
    int flatg = static_cast<float>(integ) / 3;
    cout << "flatg Res = " << flatg << endl;

    cout << "- Int Casted " << static_cast<int>(453.5) << endl
        << "- Float Casted " << static_cast<float>(45) / 7 << endl
        << "- Bool Casted " << static_cast<bool>(4) << endl
        << "-String Casted " << static_cast<string>("4") << endl;

    cout << std::setprecision

        Ch04_Student StudentTest;
    cout << "========Before========" << endl;
    cout << StudentTest.Ch04_StudentGetName() << endl
        << StudentTest.Ch04_StudentGetAverage() << endl
        << StudentTest.Ch04_StudentGetLetterGrade() << endl
        << endl;

    StudentTest.Ch04_StudentSetName("S33333333333D");
    StudentTest.Ch04_StudentSetAverage(92);

    cout << "========After========" << endl;
    cout << StudentTest.Ch04_StudentGetName() << endl
        << StudentTest.Ch04_StudentGetAverage() << endl
        << StudentTest.Ch04_StudentGetLetterGrade() << endl
        << endl;
#endif //CH04

    //Ch03
#if CH03
    // 
    //For std members, we need to define it's used
    // Variable to get the value in
    string Name = "MSA";

    //Create a class object 
    //NOTE: Typically, you cannot call a member function of a class until you create an object of that class.
    // You need to remember that static member functions are an exception.
    Ch03_MyAccount Ch03_test{ "S 33 33 33 33 33 33 33 33 D" }; // create Account object myAccount

    //Testing the need of a default constructor, we had to define the default one for our class
    Ch03_MyAccount Ch03_Test;

    //Using public set and get functions to control access to private data makes programs clearerand easier to maintain.
    //Change is the rule rather than the exception.
    //You should anticipate that your code will be modified, and possibly often.
    cout << "default Class2 name: " << Ch03_Test.GetName() << endl;

    //Doc the value before being set by the next instruction
    cout << "- Name Before modified" << endl;

    /*From main?s view, when the GetName member function is called :

        1. The program transfers execution from the call to member function GetName.
            Because getName was called via the myAccount object, getName ?knows? which object?s data to manipulate.
        2. Next, member function getName performs its task?that is, it returns(i.e., gives
            back) myAccount?s name to line 13 where the function was called.The main function does not know the details of how getName performs its task.
        3. The cout object displays the name returned by member function getName, then
            the program continues executing at line 16 in main.
    */
    cout << "= " << Ch03_test.GetName() << endl;

    //Write a new name to be set as the account owner name
    cout << "- Put your Account new Name" << endl << "= ";

    //Get line gets a complete line despite of containing spaces and so on
    getline(cin, Name);

    //Store the User entered name to the class member value
    /*From main?s view, when setName is called :
        1. The program transfers execution from the caller line in main to setName member function?s definition.
            The call passes to the function the argument value in the call?s
            parentheses?that is, theName object?s value.Because setName was called via the
            myAccount object, setName ?knows? the exact object to manipulate.
        2. Next, member function setName stores the argument?s value in the myAccount object.
        3. When setName completes execution, program execution returns to where setName was called.
    */
    Ch03_test.SetName(Name);

    cout << "- Name after modified" << endl;
    cout << "= " << Ch03_test.GetName() << endl;
#endif //CH03

    //Ch02
#if CH02
    //You Must create an object of your class so you can use its public Data
    Ch02 TestCh02;
    ////test the class data and functions
    TestCh02.AnotherCppProgramAddingIntegers();
    TestCh02.ArithmeticOperations();
    TestCh02.DecisionMakingEqualityAndRelationalOperators();
    TestCh02.FirstProgramInCpp_PrintingLineOfText();
    TestCh02.ModifyingOurFirstCppProgram();
#endif //CH02

    return 0;
}

