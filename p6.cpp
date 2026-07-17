//Write a program to swap two numbers using a third variable

#include <iostream>
using namespace std;

int main () {

    int a, b, temp;
    cout << "enter the first number:";
    cin >> a;
    cout << "enter the second number:";
    cin >> b;

    temp = a;
    a = b;
    b = temp;
    cout << "the swapped numbers are:" << a << " and " << b << endl;

    return 0;

}