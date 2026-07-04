#include <stdio.h>
int main() {
    int age[5] = {12, 13, 14, 15, 16};
    int *ptr = age; // pointer to the first element of the array age[0]

    printf("Value of age[0]: %d\n", *ptr); // dereferencing
    printf("Address of age[0]: %p\n", ptr); // address of the first element of the array

    printf("Value of age[1]: %d\n", *(ptr + 1)); // dereferencing with pointer arithmetic
    printf("Address of age[1]: %p\n", (ptr + 1)); // address of the second element of the array 

    for (int i = 0; i < 4; i++) {
        printf("%d\n", *ptr);
        ptr++; // move to next element
    }
    return 0;
}