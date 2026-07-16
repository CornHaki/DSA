#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1 = "Hello ";
    string str2 = "World!";
    cout << "Concatenation of two strings using + operator: " << endl;
    string str3 = str1 + str2; // Concatenation of two strings
    cout << str3 << endl; // Output: Hello World!
    cout << "Concatenation of two strings using append method: " << endl;
    string str4 = str1.append(str2); // Append str2 to str1
    cout << str4 << endl; // Output: Hello World!
    
    // Length of strings using length() and size() methods. size() and length() methods are equivalent and can be used interchangeably
    cout << "Length of str1: " << str1.length() << endl; // Output: 6
    cout << "Length of str2: " << str2.size() << endl; // Output: 6
    return 0;
}