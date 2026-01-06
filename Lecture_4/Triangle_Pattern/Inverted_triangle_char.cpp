#include<iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter a number: ";
    cin >> num;

    int ch = 'A';

    for(int i = 0; i<num; i++){
        for(int j = 0; j<i; j++){
            cout << " ";
        }

        for(int j = 0; j<num-i; j++){
            cout << char(ch);
        }
        ch++;
        cout << endl;
    }
    return 0;
}