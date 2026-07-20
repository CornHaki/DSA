#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << "Using for loop:" << endl;
    for(int i = 0; i < cars.size(); i++){
        cout << cars[i] << endl;
    }

    cout << "Using for-each loop:" << endl;
    for (string car : cars){
        cout << car << endl;
    }

    cout << endl;
    cars.push_back("xyz");
    for(string a : cars){
        cout << a << endl;
    }
    return 0;
}