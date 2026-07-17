//Write a program to read two numbers and print their sum, difference, product and quotient.

#include <iostream>
using namespace std;    

int main () {

    int x, y;

    cout<< "enter the value of x: ";
    cin >> x;
    cout<< "enter the value of y: ";
    cin >> y;

    cout << "the sum is: " << x+y << endl;
    cout << "the difference is: " << x-y << endl;
    cout << "the product is: " << x*y << endl;
    cout << "the quotient is: " << x/y << endl;

    return 0; 
}