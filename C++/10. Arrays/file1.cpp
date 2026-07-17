// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
// An array is a collection of variables of the same type that are stored in contiguous memory locations.
// Arrays are useful when we want to store a large number of values of the same type and access them using a single variable name and an index.
// Arrays can be of any data type, including int, float, char, etc. The size of the array must be specified at the time of declaration, and it cannot be changed later.
// Arrays are zero-indexed, meaning the first element of the array is accessed using index 0, the second element using index 1, and so on.
// Syntax for declaring an array:
/*
data_type array_name[array_size];
*/
#include <iostream>
using namespace std;
int main() {
    // Declare and initialize an array of integers with size 5
    int numbers[5] = {10, 20, 30, 40, 50};
    // Access and print the array elements
    for(int i = 0; i < 5; i++){
        cout << numbers[i] << " "; // Print each element of the array
    }
    cout << endl;
    return 0;
}