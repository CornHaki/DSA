// Ternary Operator
// The ternary operator returns a value based on a condition: if the condition is true, it returns the first value; otherwise, it returns the second value.

// It can be used to replace multiple lines of code with a single line, and is often used to replace simple if...else statements:
// variable = (condition) ? expressionTrue : expressionFalse;
#include <iostream>
using namespace std;

int main() {
    int time = 20;
    string result = (time < 18) ? "Good Day" : "Good evening";
    cout << result << endl;
    cout << ((time < 18) ? "Good day." : "Good evening.") << endl;

    // Tip: Use the ternary operator for short and simple conditions. For longer or more complex logic, the regular if...else statement is easier to read.
    return 0;
}