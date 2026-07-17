// continue statement is used to skip the current iteration of a loop and move to the next iteration.
// continue statement is commonly used in loops to skip certain elements based on a specific condition.
// continue statement allows to bypass the remaining code in the current iteration and proceed to the next iteration.
// continue statement is particularly useful when we want to skip certain iterations of a loop without exiting the loop entirely.
// continue statement can be used in various types of loops, including for, while, and do-while loops. It provides a way to skip iterations based on a condition, improving efficiency and readability of the code.
// Syntax:
/*
continue;
*/
*/
#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 10; i++){
        if(i == 5){
            continue; // Skip the rest of the code in this iteration when i is equal to 5
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}