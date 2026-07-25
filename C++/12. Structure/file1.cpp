// Example of Structure in C++
// Structure is a user-defined data type that allows grouping of variables of different types under a single name. It is used to represent a record.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

int main() {
    Student student1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.gpa = 3.5;

    cout << "Student Name: " << student1.name << endl;
    cout << "Student Age: " << student1.age << endl;
    cout << "Student GPA: " << student1.gpa << endl;

    return 0;
}