//Write a program to read the length and breadth of a rectangle and print its area and perimeter.

#include <iostream>
using namespace std;

int main () {

    float length, breadth, area, perimeter;
    cout << "enter the length of the rectangle: ";
    cin >> length;
    cout << "enter the breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "the area and perimeter is:" << area << " and " << perimeter << endl;
    return 0;
}

