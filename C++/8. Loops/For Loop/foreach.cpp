// foreach loop is used to iterate over elements in a collection or array. It simplifies the syntax and improves readability by eliminating the need for explicit indexing.

// foreach loop is also known as range-based for loop in C++11 and later versions. 

// foreach loop is particularly useful when you want to access each element of a collection without modifying the collection itself. It automatically handles the iteration and provides a convenient way to work with elements in a collection.

// foreach loop is commonly used with arrays, vectors, and other container types in C++. It allows you to iterate over the elements without worrying about the size of the collection or the index values.

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