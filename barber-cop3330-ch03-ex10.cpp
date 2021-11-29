#include <bits/stdc++.h>
#include <iostream>

using namespace std;
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Quinn Barber
 */

int main(void)
{
    string operation;
    cout << "Enter an operation followed by two operands:\n";
    cin >> operation;
    if(operation == "+"){
        double num1, num2;
        cin >> num1;
        cin >> num2;
        cout << num1 << " + " << num2 << " is equal to " << (num1+num2);
    }
    else if(operation == "-"){
        double num1, num2;
        cin >> num1;
        cin >> num2;
        cout << num1 << " - " << num2 << " is equal to " << (num1-num2);
    }
    else if(operation == "/"){
        double num1, num2;
        cin >> num1;
        cin >> num2;
        cout << num1 << " / " << num2 << " is equal to " << (num1/num2);
    }
    else if(operation == "*"){
        double num1, num2;
        cin >> num1;
        cin >> num2;
        cout << num1 << " * " << num2 << " is equal to " << (num1*num2);
    }
    else{
        cout << "Improper format try again.";
    }


}
