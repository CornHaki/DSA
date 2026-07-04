#include <stdio.h>
int main() {
    int age[5] = {12, 13, 14, 15, 16};

    // printing the array elements using pointer arithmetic
    // Placing * in front *(age + i) tells the computer, "Go to this memory address and give me the value stored inside it."
    for(int i = 0; i < 5; i++) {
        printf("Value at age[%d]: %d\n", i, *(age + i));
    }
    printf("\n");
    // printing the addresses of the array elements using pointer arithmetic
    for(int i = 0; i < 5; i++) {
        printf("Address of age[%d]: %p\n", i, (age + i));
    }
    printf("\n");
    // printing the addresses of the array elements using array indexing
    for(int i = 0; i < 5; i++) {
        printf("Address of age[%d]: %p\n", i, &age[i]);
    }
    printf("\n");
    // Get the memory address of the age array
    printf("Address of age array: %p\n", age);
    printf("\n");
    // Get the memory address of the first array element
    printf("Address of first element: %p\n", &age[0]);

    // Change the value of the first element to 13
    *age = 13;

    // Change the value of the second element to 17
    *(age + 1) = 17;

    // Get the value of the first element
    printf("Value of first element: %d\n", *age);

    // Get the value of the second element
    printf("Value of second element: %d\n", *(age + 1));
    return 0;
}