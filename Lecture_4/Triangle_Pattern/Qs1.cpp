// Write a C++ program to print the following triangle pattern for a given number of rows.
// For example, if the user inputs 5, the output should be:
// *
// * *
// * * *
// * * * *

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}