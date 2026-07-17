//Write a program to read the radius of a circle and print its area and circumference.

#include <iostream>
using namespace std; 

int main () {

    float radius, area, circumference;

    cout << "enter radius: ";
    cin >> radius;
    
    cout << "area: " << 3.14 * radius * radius << endl;
    cout << "circumference: " << 2 * 3.14 * radius << endl;

    return 0;
}