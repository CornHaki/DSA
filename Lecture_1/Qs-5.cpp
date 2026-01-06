// Practice Question.5: Find whether a number is prime or not

#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i=2; i<=(num-1); i++){
        if(num%i==0){
            cout<<num<<" is not a prime number.";
            return 0;
        }
    }
    cout<< num << " is a prime number.";
    return 0;
}