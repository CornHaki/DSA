
// Structure is a user-defined data type that allows grouping of variables of different types under a single name. It is used to represent a record. 
// In this example, we define a structure called 'Student' that contains three members: name, age, and gpa. We then create an instance of the structure and assign values to its members. Finally, we print the values of the members to the console.
// Structures are useful for organizing related data and can be used to create complex data types. Structures in C++ can also contain functions, but in this example, we are only using data members. 
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