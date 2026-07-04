// & --> reference operator  |  * --> dereference operator  |
// &: "Where is it?" (Address-Of)  |  *: "What is inside?" (Value-At)
// reference operator is used to get the address of a variable  |  dereference operator is used to get the value at the address stored in a pointer
#include <stdio.h>
int main() {
    int age = 12;
    int *ptr = &age;
    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);
    printf("Value of ptr:   %p\n", ptr);
    // dereferencing the pointer to get the value at the address stored in ptr
    printf("Value at ptr:   %d\n", *ptr);
    return 0;
}