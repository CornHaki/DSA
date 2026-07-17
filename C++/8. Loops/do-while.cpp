// This loop will execute the code block once, before checking if the condition is true. Then it will repeat the loop as long as the condition is true.

// Syntax of do-while loop
/*
do {
    code block to be executed
} while (condition); 
*/
// The ';' at the end of the while statement is required. 
// The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested.

// The do/while loop always runs at least once, even if the condition is already false. This is different from a regular while loop, which would skip the loop entirely if the condition is false at the start.

//This behavior makes do/while useful when you want to ensure something happens at least once, like showing a message or asking for user input.

// Example of do-while loop
// This example keeps asking the user to enter a positive number. The loop stops when the user enters 0 or a negative number:
#include <iostream>
using namespace std;
int main() {
    int number;
    do {
        cout << "Enter a positive number (0 or negative to stop): ";
        cin >> number;
    } while (number > 0);
    cout << "Loop stopped." << endl;
    return 0;
}


