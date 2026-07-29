#include <iostream>
enum level {
    low = 1,
    medium,
    high
}
int main(){
    enum level var = medium;
    switch(var){
        case 1:
            cout << low << endl;
            break;
        case 2:
            cout << medium << endl;
            break;
        case 3:
            cout << high << endl;
            break;
    }
    return 0;
}