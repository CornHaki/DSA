// break statement is used to terminate the loop or switch statement and transfer execution to the statement immediately following the loop or switch.
// break statement is commonly used in loops to exit the loop prematurely based on a certain condition. It allows you to break out of the loop and continue with the rest of the program.
// break statement is also used in switch statements to exit the switch block after executing a specific case. It prevents the execution from falling through to the next case.
// break statement is particularly useful when you want to stop the loop or switch statement when a certain condition is met, allowing for more control over the flow of the program.
// break statement can be used in various types of loops, including for, while, and do-while loops. It provides a way to exit the loop early when a specific condition is satisfied, improving efficiency and readability of the code
// Syntax:
/*
break;
*/
#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 10; i++){
        if(i == 5){
            break; // Exit the loop when i is equal to 5
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}