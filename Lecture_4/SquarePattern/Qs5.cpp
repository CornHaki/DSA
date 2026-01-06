//write a program to print the following pattern for n = 4
// A B C D
// E F G H
// I J K L
// M N O P
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    char ch = 'A'; 

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}