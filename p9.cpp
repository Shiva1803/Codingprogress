// Write a program to read the marks of 5 subjects and print the total and average.

#include <iostream>
using namespace std;

int main () {

    int marks[5];
    int total = 0; 
    float average;

    cout << "enter the marks of your 5 subs: " << endl;
    for (int i = 0; i< 5; i++) {

        cin >> marks[i];
        total += marks [i];
        
    }
    average = total / 5.0;
    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;

    return 0;
}