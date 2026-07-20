#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << "Using for loop:" << endl;
    for(int i = 0; i < cars.size(); i++){
        cout << cars[i] << endl;
    }
    return 0;
}