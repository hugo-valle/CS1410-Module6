// File: string1.cpp
// Created by Hugo Valle on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <string> /* C++ string class */
using namespace std;
// Constants, Structs, Classes
// Prototypes
// Main Program Program
int main()
{
    string s1;  /* Define a string */
    string s2 = "Waldo Weber";  /* Define and Initialize string */
    string s3("Waldo Weber University");  /* Define and Initialize string */
    s1 = s3;    // assignment
    cout<<"S1 "<<s1<<endl;
    s1 += s2;   // concatenation
    cout<<"2) S1 "<<s1<<endl;
    cout<<"S2 "<<s2<<endl;
    cout<<"S3 "<<s3<<endl;
    // Swap values
    s1.swap(s2);
    cout<<"3) S1 "<<s1<<endl;
    cout<<"S2 "<<s2<<endl;
    cout<<"S3 "<<s3<<endl;


    return 0;
}
// Function Definitions