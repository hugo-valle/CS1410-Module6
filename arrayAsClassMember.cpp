// File: arrayAsClassMember.cpp
// Created by Hugo Valle on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>

using namespace std;
// Constants, Structs, Classes
const int MAX = 10;
class Stack
{
private:
    int st[MAX];    /* stack: array on ints */
    int top;        /* number of top of stack */
public:
    Stack()         /* Constructor */
    {
        top = -1;
    }
    void push(int var)  /* put member on stack */
    {
        st[++top] = var;
    }
    int pop()           /* take number of stack */
    {
        return st[top--];
    }
};

// Prototypes

// Main Program Program
int main()
{
    Stack s1;

    s1.push(11);
    s1.push(44);
    cout<< " 1 "<< s1.pop() << endl;  // 44
    cout<< " 2 "<< s1.pop() << endl;  // 11
    s1.push(12);
    s1.push(31);
    s1.push(94);
    s1.push(144);
    cout<< " 3 "<< s1.pop() << endl;  // 144
    cout<< " 4 "<< s1.pop() << endl;  // 94

    return 0;
}
// Function Definitions