#include<iostream>
using namespace std;

int main(){

    // Write a program in C++ to swap two numbers

    int num1, num2, temp=0;
    cout << "Enter First Number \n";
    cin >> num1;

    cout << "Enter Last Number \n";
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "number one = " << num1 << endl;

    cout << "number two = " << num2 << endl;


return 0;
}


