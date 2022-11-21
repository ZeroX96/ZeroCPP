// ZeroCppConsoleSrc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template <typename Type>
/// <summary>
/// 
/// </summary>
/// <typeparam name="Type"></typeparam>
/// <param name="A_Saad"></param>
/// <param name="B_Saad"></param>
/// <returns></returns>
Type GetMax(Type A_Saad, Type B_Saad)
{
    return (A_Saad > B_Saad) ? A_Saad : B_Saad;
}

template <class a1, typename b2>

a1 GetMaxV2(a1 A1, b2 B2)
{
    return A1 + B2;
}
int main(void )
{
    cout << "Hi S3D " << endl;
    cout << GetMax<int>(5, 6) << endl;
    cout << GetMaxV2<char, int>('M', 2.4) << endl;
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
