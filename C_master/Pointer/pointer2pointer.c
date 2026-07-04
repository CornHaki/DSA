#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x; // pointer to x
    printf("Value of x: %d\n", *ptr);
    return 0;
}