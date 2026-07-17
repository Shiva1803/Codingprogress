// Write a program to read a temperature in Celsius and convert it to Fahrenheit.

#include <iostream>
using namespace std;    

int main () {

float celsius, fahrenheit;
char choice;

cout << "Welcome to temp converter!" << endl;
cout << "Enter C for converting Celsius to Fahrenheit or F for converting Fahrenheit to Celsius: " << endl;

cout << "Enter your choice: ";
cin >> choice;

if (choice == 'C' || choice == 'c') {

    cout <<  "Enter the temperature in celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
} else {

    cout <<  "Enter the temperature in fahrenheit: " ;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5/9;
    cout << "Temperature in Celsius: " << celsius << endl;
}

}