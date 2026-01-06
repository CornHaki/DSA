// Write a program to print the butterfly pattern for a given number of rows.
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number of rows: ";
    cin >> num;

    // Upper Half
    for(int i=0; i<num; i++){

        //left wing
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }

        //spaces
        for(int j=0; j<2*(num-i-1); j++){
            cout<<" ";
        }

        //right wing
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Lower Half
    for(int i=num-1; i>=0; i--){

        //Left wing
        for(int j=i; j>=0; j--){
            cout<<"*";
        }

        //spaces
        for(int j=0; j<2*(num-i-1); j++){
            cout<<" ";
        }

        //right wing
        for(int j= i; j>=0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}