// program to check palindrome number


# include <iostream>
using namespace std;

int main () {

    int num, original, reversed = 0, remainder;
    cout << "Enter an integer: ";
    cin >> num;

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }
    return 0; 
}

// hell yeah 