#include <bits/stdc++.h>
using namespace std;

//arrays always go with reference 

void dosomething(int arr[], int n) {
    arr[0] +=100;
    cout << "value inside fucntion: " <<arr[0] << endl;
}
int main()
{   
    int n = 5;
    int arr[n];
    for (int i = 0; i<n; i =i+1) {
        cin >> arr[i]; 
    }

    dosomething(arr, n);
    return 0;
}
