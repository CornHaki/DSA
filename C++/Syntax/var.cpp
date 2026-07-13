#include <iostream>
using namespace std;

int main() {
    // Constants
    const double pi = 3.14159;
    cout << "The value of pi is " << pi << endl;

    /*  When you declare a constant variable, it must be assigned with a value:
        const int minutesPerHour = 60;
    This however, will not work:
        const int minutesPerHour;
        minutesPerHour = 60; // error*/

    string studentID = "MCA2565015";
    int studentAge = 23;
    int studentFee = 50000;
    char studentGrade = 'A';
    cout << "Student ID: " << studentID << endl;
    cout << "Student Age: " << studentAge << endl;
    cout << "Student Fee: " << studentFee << endl;
    cout << "Student Grade: " << studentGrade << endl;

    return 0;
}