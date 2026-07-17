// foreach loop is used to iterate over elements in a collection or array. It simplifies the syntax and improves readability by eliminating the need for explicit indexing.

// Syntax: 
/*
 for (datatype variable : collection) 
    { // code to be executed }
*/
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Array Elements: ";
    for(int element : arr){
        cout << element << " ";
    }
    cout << endl;
    return 0;
}