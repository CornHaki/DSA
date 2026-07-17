// Switch statement syntax in C++
// The switch statement allows you to execute one block of code among many options based on the value of a variable. It is often used as an alternative to multiple if-else statements when you have a variable that can take on a limited set of values.
// The syntax of a switch statement is as follows: 
/* switch (expression) {
    case value1:
        // Code to execute if expression equals value1
        break;
    case value2:
        // Code to execute if expression equals value2
        break;
    // You can have any number of case statements
    default:
        // Code to execute if expression doesn't match any case
}
*/

#include <iostream>
using namespace std;
int main(){
    int day = 4;
    switch (day) {
        case 1: cout << "Monday" << endl;
        break;
        case 2: cout << "Tuesday" << endl;
        break;
        case 3: cout << "Wednesday";
        break;
        case 4: cout << "Thursday";
        break;
        case 5: cout << "Friday";
        break;
        case 6: cout << "Saturday";
        break;
        case 7: cout << "Sunday";
        break;
        default: cout << "Invalid day";
    }
    return 0;
}