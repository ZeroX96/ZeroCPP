## Introduction To Cpp Input Output And Operators

##### Introduction

We now introduce C++ programming, which facilitates a disciplined approach to program development. Most of the C++ programs you’ll study in this book process data and display results. In this chapter, we present five examples that demonstrate how your programs can display messages and obtain data from the user for processing. The first three examples display messages on the screen. The next obtains two numbers from a user at the keyboard, calculates their sum and displays the result. The accompanying discussion shows you how to perform arithmetic calculations and save their results for later use. The fifth example demonstrates decision making by showing you how to compare two numbers, then display messages based on the comparison results. We analyze each program one line at a time to help you ease into C++ programming.

##### First Program in C++: Printing a Line of Text

Consider a simple program that prints a line of text. This program illustrates several important features of the C++ language. The text in lines 1–10 is the program’s source code(or code). The line numbers are not part of the source code. 

```c++
// Fig. 2.1: fig02_01.cpp
// Text-printing program.
#include<iostream> // enables program to output data to the screen
// function main begins program execution
intmain() {
std::cout << "Welcome to C++!\n"; // display message
  return 0; // indicate that program ended successfully
} // end function main
```

Outputs the Following `Welcome to C++`

**Comments** Each begin with //, indicating that the remainder of each line is a comment. You insert comments to document your programs and to help other people read and understand them. Comments do not cause the computer to perform any action when the program is run—they’re ignored by the C++ compiler and do not cause any machine-language object code to be generated. The comment Text-printing program describes the purpose of the program. A comment beginning with // is called a single-line comment because it terminates at the end of the current line. You also may use comments containing one or more lines enclosed in  /*and */ , as in

```c++
// Fig. 2.1: fig02_01.cpp
// Text-printing program.
or
/* Fig. 2.1: fig02_01.cpp
Text-printing program. */
```

**#include Preprocessing Directive** is a preprocessing directive, which is a message to the C++ preprocessor.    Lines that begin with #are processed by the preprocessor before the program is compiled. This line notifies the preprocessor to include in the program the contents of the input/output stream header <iostream>. This header is a file containing information the compiler uses when compiling any program that outputs data to the screen or inputs
data from the keyboard using C++’s stream input/output. The program in Fig. 2.1 outputs data to the screen, as we’ll soon see. We discuss headers in more detail in Chapter 6 and explain the contents of <iostream>in Chapter 13. 

```c++
#include<iostream> // enables program to output data to the screen
```

