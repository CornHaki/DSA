#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n); // dynamic size array using vector
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    arr.push_back(10); // adding an element to the end of the array
    cout << "The elements of the array after adding an element are: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}