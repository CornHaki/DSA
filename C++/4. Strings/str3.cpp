// CPP escape characters
#include <iostream>
#include <string>
using namespace std;
int main() {
    // Escape characters are used to represent special characters in strings. They are preceded by a backslash (\) and have specific meanings. For example, \n represents a newline character, \t represents a tab character, and \\ represents a backslash character.
    string str1 = "Hello\nWorld!"; // \n represents a newline character
    cout << "Using escape character \\n: " << endl;
    cout << str1 << endl; // Output: Hello (newline) World!

    string str2 = "Hello\tWorld!"; // \t represents a tab character
    cout << "Using escape character \\t: " << endl;
    cout << str2 << endl; // Output: Hello (tab) World!

    string str3 = "Hello\\World!"; // \\ represents a backslash character
    cout << "Using escape character \\\\: " << endl;
    cout << str3 << endl; // Output: Hello\World!

    string str4 = "Hello\"World!"; // \" represents a double quote character
    cout << "Using escape character \\\" : " << endl;
    cout << str4 << endl; // Output: Hello"World!

    string str5 = "Hello\'World!"; // \' represents a single quote character
    cout << "Using escape character \\\' : " << endl;
    cout << str5 << endl; // Output: Hello'World!

    string str6 = "Hello\bWorld!"; // \b represents a backspace character
    cout << "Using escape character \\b : " << endl;
    cout << str6 << endl; // Output: HelloWorld! (backspace removes the character before it)

    string str7 = "Hello\rWorld!"; // \r represents a carriage return character
    cout << "Using escape character \\r : " << endl;
    cout << str7 << endl; // Output: World! (carriage return moves the cursor to the beginning of the line)

    string str8 = "Hello\fWorld!"; // \f represents a form feed character
    cout << "Using escape character \\f : " << endl;
    cout << str8 << endl; // Output: HelloWorld! (form feed moves the cursor to the next page)
    return 0;
}