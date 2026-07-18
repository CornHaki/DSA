// constexpr is a specifier that declares that it is possible to evaluate the value of the function or variable at compile time. it can be used to declare that a function or variable is a constant expression, which means that its value can be determined at compile time. This can lead to performance improvements and allows for more efficient code generation. 
// A constexpr function is a function that can be evaluated at compile time. It can be used to perform computations that are known at compile time, such as mathematical calculations or string manipulations. A constexpr variable is a variable that can be initialized with a constant expression, which means that its value can be determined at compile time.
// A constexpr function must have a return type that is a literal type, and it must not have any side effects. It can take parameters, but they must also be constant expressions. A constexpr variable must be initialized with a constant expression, and it cannot be modified after initialization.
// The constexpr specifier can be used in conjunction with other specifiers, such as inline or static, to further optimize the code. It can also be used with templates to create compile-time computations that are specific to a particular type or value.
// In summary, constexpr is a powerful feature in C++ that allows for compile-time evaluation of functions and variables, leading to improved performance and more efficient code generation.
// One of the major advantages of constexpr is that it allows function results to be used where compile-time constant expressions are required, such as in array sizes, template parameters, and other contexts where constant expressions are needed. This can lead to more efficient code generation and improved performance, as the compiler can optimize the code based on the known values at compile time.
#include <iostream>
using namespace std;

constexpr int product(int x, int y) {
    return x * y;
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    constexpr int result = product(x, y);
    cout << result << endl;
    return 0;
}