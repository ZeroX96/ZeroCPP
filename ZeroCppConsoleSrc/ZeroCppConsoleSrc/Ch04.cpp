
#include "Ch04.h"

Ch04_Student::Ch04_Student(void) :
    StudentName{ "" },
    StudentAverage{ 0 }
{
    cout << "==============================Ch04_Constructor." << endl;
}

Ch04_Student::~Ch04_Student(void)
{
    cout << "==============================Ch04_Destructor." << endl;
}

void Ch04_Student::Ch04_StudentSetName(const string& NameToSet)
{
    StudentName = NameToSet;
}

string Ch04_Student::Ch04_StudentGetName(void)const
{
    return StudentName;
}

void Ch04_Student::Ch04_StudentSetAverage(int32_t AverageToSet)
{
    if ((AverageToSet > 0) && (AverageToSet <= 100))
    {
        StudentAverage = AverageToSet;
    }
    else
    {
        cout << "Sorry, your value is invalid!!!" << endl;
    }
}

int32_t Ch04_Student::Ch04_StudentGetAverage(void)const
{
    return StudentAverage;
}
/// <summary>
/// 
/// 
/// const int32_t EXCELLENT = 95; // Grade = Excellent
/// const int32_t VERYGOODP = 85; // Grade = Very Good +
/// const int32_t VERY_GOOD = 75; // Grade = Very Good
/// const int32_t VERYGOODM = 70; // Grade = Very Good -
/// const int32_t GOOD_PLUS = 65; // Grade = Good +
/// const int32_t GOOOOOOOD = 60; // Grade = Good
/// const int32_t GOODMINUS = 55; // Grade = Good -
/// </summary>
/// <param name=""></param>
/// <returns></returns>
string Ch04_Student::Ch04_StudentGetLetterGrade(void) const
{
    string ExecRes{ "Invalid" };

    if (StudentAverage >= EXCELLENT)
    {
        ExecRes = "Grade = Excellent, You Are Really Great";
    }
    else if ((StudentAverage < EXCELLENT) && (StudentAverage >= VERYGOODP))
    {
        ExecRes = "Grade = Very Good +, You Are Great";
    }
    else if ((StudentAverage < VERYGOODP) && (StudentAverage >= VERY_GOOD))
    {
        ExecRes = "Grade = Very Good, You Are Great";
    }
    else if ((StudentAverage < VERY_GOOD) && (StudentAverage >= VERYGOODM))
    {
        ExecRes = "Grade = Very Good -, You Are Great";
    }
    else if ((StudentAverage < VERYGOODM) && (StudentAverage >= GOOD_PLUS))
    {
        ExecRes = "Grade = Good +, You Are Great";
    }
    else if ((StudentAverage < GOOD_PLUS) && (StudentAverage >= GOOOOOOOD))
    {
        ExecRes = "Grade = Good, You Are Great";
    }
    else if ((GOOOOOOOD < EXCELLENT) && (StudentAverage >= GOODMINUS))
    {
        ExecRes = "Grade = Good -, You Are Great";
    }
    else
    {
        ExecRes = "You Failed, but You Are still Great";
    }
    return ExecRes;
}
