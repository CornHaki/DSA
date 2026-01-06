//Reverse Triangle pattern
// Write a program to print the following pattern for a given number n.
// If n = 4, then the pattern will be:
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        for(int j = i; j >= 1; j--){ //backward loop from i to 1
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}