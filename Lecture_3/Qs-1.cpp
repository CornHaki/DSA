// Find a given character is uppercase or lowercase
#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an uppercase character";
    } else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a lowercase character";
    } else {
        cout << ch << " is not an alphabetic character";
    }
    return 0;
}