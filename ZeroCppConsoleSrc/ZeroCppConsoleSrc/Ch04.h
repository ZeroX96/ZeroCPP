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


//Define the ranges for the ranking of the user
const int32_t EXCELLENT = 95; // Grade = Excellent
const int32_t VERYGOODP = 85; // Grade = Very Good +
const int32_t VERY_GOOD = 75; // Grade = Very Good
const int32_t VERYGOODM = 70; // Grade = Very Good -
const int32_t GOOD_PLUS = 65; // Grade = Good +
const int32_t GOOOOOOOD = 60; // Grade = Good
const int32_t GOODMINUS = 55; // Grade = Good -



class Ch04_Student {
public:
    Ch04_Student(void);
    ~Ch04_Student(void);

    void Ch04_StudentSetName(const string& NameToSet);

    string Ch04_StudentGetName(void) const;

    void Ch04_StudentSetAverage(int32_t AverageToSet);

    int32_t Ch04_StudentGetAverage(void)const;

    string Ch04_StudentGetLetterGrade(void)const;

private:
    string  StudentName{ "" };
    int32_t StudentAverage{ 0 };
};
