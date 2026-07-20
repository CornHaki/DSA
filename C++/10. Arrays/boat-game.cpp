#include <iostream>
using namespace std;
int main() {
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 1}
    };
    int hits = 0;
    int turns = 0;
    while (hits < 4) {
        int row, column;
        cout << "Selecting coordinates (row, column) to attack (0-3): "<< endl;
        cout << "Enter row(0-3): ";
        cin >> row;
        cout << "Enter column(0-3): ";
        cin >> column;
        if (row < 0 || row > 3 || column < 0 || column > 3) {
            cout << "Invalid coordinates. Please try again." << endl;
            continue;
        }
        if(ships[row][column] == 1){
            cout << "Hits!" << endl;
            ships[row][column] = 0; // Mark the ship as hit
            hits++;
        } else {
            cout << "Miss!" << endl;
        }
        turns++;
        cout << "Total hits: " << hits << endl;
        cout << "Total turns: " << turns << endl;
    }
    cout << "Victory! You have sunk all the ships in " << turns << " turns." << endl;
    return 0;
}