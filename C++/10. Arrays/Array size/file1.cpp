// sizeof() operator returns the size of the array in bytes.
// To get the number of elements in the array, divide the size of the array by the size of the first element in the array. 
// sizeof(array) / sizeof(array[0]) gives the number of elements in the array.
// This method only works for arrays, not for pointers or dynamically allocated arrays.
// This method is not applicable for dynamically allocated arrays or pointers, as they do not have a fixed size known at compile time.
// This method is also not applicable for arrays passed to functions, as they decay to pointers and lose their size information.
// sizeof() operator can be used to determine the size of an array at compile time, but it cannot be used to determine the size of a dynamically allocated array or a pointer.
// .size() method can be used to determine the size of a vector at runtime, as vectors are dynamic arrays that can grow or shrink in size.
// sizeof() operator is only applicable to arrays with a fixed size known at compile time, and it cannot be used to determine the size of dynamically allocated arrays or pointers, but .size() method can be used to determine the size of a vector at runtime, as vectors are dynamic arrays that can grow or shrink in size, and .size() method can be used to determine the size of a vector at runtime, as vectors are dynamic arrays that can grow or shrink in size, and .size() method can also be used to determine the size of a fixed-size array at runtime, as long as the array is not passed to a function or decayed to a pointer.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    for(int i = 0; i < arr.size(); i++) { // this is wrong because arr is an array, not a vector, and arrays do not have a size() method. Instead, we can use sizeof(arr) / sizeof(arr[0]) to get the number of elements in the array.
        cout << arr[i] << " ";
    }

    int arr1[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) { // this is correct because sizeof(arr1) / sizeof(arr1[0]) gives the number of elements in the array, which is 5 in this case.
        cout << arr1[i] << " ";
    }
    return 0;
}