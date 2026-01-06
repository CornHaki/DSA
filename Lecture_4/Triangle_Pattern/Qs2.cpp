//Write a program to print the following pattern for a given number n.
//If n = 4, then the pattern will be:
//1
//2 2
//3 3 3
//4 4 4 4
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < i+1; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    return 0;
}