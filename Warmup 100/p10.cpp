// Write a program to read seconds and convert them into hours, minutes and seconds.


#include <iostream>
using namespace std;

int main () {
    int seconds, hours, minutes;

    cout << "enter the seconds:" << endl;

    cin >> seconds;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    cout << "Hours: " << hours << "Minutes: " << minutes << "Seconds: " << seconds << endl;
    return 0;
}