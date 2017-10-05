// File: funcArray.cpp
// Created by Hugo Valle on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
const int SIZE = 3;

/* Prototypes */
// Arrays are passed by reference
void AgeInput(int iage[SIZE]);
void ShowAge(int iage[SIZE]);

//void AgeInput(int iage[]); // another notation

int main()
{
    /* Define an array of 3 integers */
    int age[SIZE];
    // Take input
    AgeInput(age);
    ShowAge(age);
    cout<<"\nDone!"<<endl;
    return 0;
}
// Function Definitions
void AgeInput(int iage[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout <<"Enter your age: ";
        cin >> iage[i];
    }
}

void ShowAge(int iage[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout <<"\nage "<< i << " is "<< iage[i];
    }
}
