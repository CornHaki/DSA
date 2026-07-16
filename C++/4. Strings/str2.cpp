// access string elements. Strings are just like arrays of characters. Each character in a string can be accessed using an index, starting from 0 for the first character.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1 = "Hello World!";
    cout << "Accessing string elements using index: " << endl;
    cout << "First character of str1: " << str1[0] << endl; // Output: H

    cout << "Accessing string elements using at() method: " << endl;
    cout << "First character of str1: " << str1.at(0) << endl; // Output: H

    cout << "Accessing string elements using front() and back() methods: " << endl;
    cout << "First character of str1: " << str1.front() << endl; // Output: H
    cout << "Last character of str1: " << str1.back() << endl; // Output: !

    cout << "Accessing string elements using iterators: " << endl;
    // Iterators are used to traverse through the string. The begin() method returns an iterator pointing to the first character of the string, and the end() method returns an iterator pointing to one past the last character of the string.
    // Here string::iterator is a type that can be used to iterate over the characters in the string. The iterator is incremented using the ++ operator, and dereferenced using the * operator to access the character it points to.
    // here (string::iterator it = str1.begin(); it != str1.end(); ++it) this means that we are creating an iterator it that starts at the beginning of str1 and continues until it reaches the end of str1. In each iteration, we increment the iterator to point to the next character in the string.
    for (string::iterator it = str1.begin(); it != str1.end(); ++it) {
        cout << *it << " "; // Output: H e l l o   W o r l d !
    }
    cout << endl;

    cout << "Accessing last elements using length(): " << endl;
    cout << "Last character of str1: " << str1[str1.length() - 1] << endl; // Output: !
    return 0;
}