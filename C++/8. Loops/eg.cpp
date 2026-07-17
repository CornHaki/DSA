#include <iostream>
using namespace std;
int main() {
    // here number is the variable that we want to reverse. We will use a while loop to reverse the number. 
    // The loop will continue until the number becomes less than or equal to 10. 
    // In each iteration, we will extract the last digit of the number using the modulus operator (%), and then we will add that digit to the reversed number after multiplying the reversed number by 10. 
    // Finally, we will divide the original number by 10 to remove the last digit.
    int number = 12345;
    int revNumber = 0;
    while (number){
        // Extract the last digit of the number.
        int lastDigit = number % 10;
        // Add the last digit to the reversed number after multiplying the reversed number by 10.
        revNumber = revNumber * 10 + lastDigit;
        // Remove the last digit from the original number.
        number = number / 10;
    }
    cout << "Reversed number: " << revNumber << endl;
    return 0;
}