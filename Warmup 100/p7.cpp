// Write a program to swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main () {

    int a, b;
    cout << "enter the 1st no: ";
    cin >> a;
    cout << "enter the 2nd number:";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "After swapping: " << endl;
    cout << "1st number: " << a << endl;
    cout << "2nd number: " << b << endl;

    return 0;

}