//write a program to print the following pattern for n = 4
// A B C D
// A B C D
// A B C D
// A B C D
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = 0; i < num; i++){
        char ch = 'A'; // this will reset ch to 'A' for each new row
        for(int j = 0; j < num; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}