#include <bits/stdc++.h>
using namespace std;

//pass by value

void dosomething(int num){ //adding an &num here will give us pass by reference
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;
}
//this output will give 20

int main () {

    int num = 10;//but this will only give 10
    dosomething(num);
    cout << num << endl;
    return 0;
}
