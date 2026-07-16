// CPP User Input Strings
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;
    
    // However cin >> str; // This will only read input until the first whitespace character (space, tab, newline). It will not read the entire line if it contains spaces. cin considers whitespace characters as delimiters and stops reading input when it encounters the first whitespace character. This means that if the user enters a string with spaces, only the first word will be stored in the string variable str, and the rest of the input will be ignored. 

    // from the above example, if we enter "Hello World!" as input, the output will be:
    // Enter a string: Hello World!
    // You entered: Hello

    // To read the entire line of input, we can use the getline() function, which reads input until a newline character is encountered. The getline() function takes two arguments: the input stream (cin) and the string variable (str) where the input will be stored. It reads the entire line of input, including spaces, and stores it in the string variable str. This allows us to capture multi-word strings or sentences as input.

    // getline() takes cin as the first parameter, and the string variable as second.

    cout << endl;
    string str2;
    cout << "Enter another string: ";
    getline(cin, str2);
    cout << "You entered: " << str2 << endl;
    return 0;
}