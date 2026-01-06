//write a program to print the given hollow diamond pattern

//    *              
//   * *                   *
//  *   *                 * *
// *     *               *   *
// *     *              *     *
//  *   *                *   *
//   * *                  * *
//    *                    *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    // Upper Half
    for(int i=0; i<n; i++){

        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";

        //spaces in middle
        if(i != 0){
            for(int k = 0; k<2*i-1; k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    // Lower Half
    // for(int i=n-1; i>=0; i--){

    //     //spaces
    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";

    //     //spaces in middle
    //     if(i != 0){
    //         for(int k = 0; k<2*i-1; k++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //lower half alternative
    for(int i=0; i<(n-1); i++){
        //spaces
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        cout<<"*";

        //spaces in middle
        if(i != n-2){
            for(int k = 0; k<2*(n-i-2)-1; k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}