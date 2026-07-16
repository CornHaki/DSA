# C++ Math Functions (`<cmath>`)

The `<cmath>` library provides a comprehensive collection of functions for performing mathematical operations. Below is a structured, production-ready reference guide complete with working examples for every function.

## Table of Contents
- [Absolute Values](#absolute-values)
- [Trigonometric Functions](#trigonometric-functions)
- [Hyperbolic Functions](#hyperbolic-functions)
- [Exponential and Logarithmic Functions](#exponential-and-logarithmic-functions)
- [Power and Root Functions](#power-and-root-functions)
- [Rounding and Truncation Functions](#rounding-and-truncation-functions)
- [Minimum, Maximum, and Difference](#minimum-maximum-and-difference)
- [Remainder Functions](#remainder-functions)
- [Floating-Point Manipulation](#floating-point-manipulation)
- [Error and Gamma Functions](#error-and-gamma-functions)
- [Other Functions](#other-functions)

## Absolute Values

### `abs(x)`
> **Description:** Returns the absolute value of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    int x = -10;
    auto result = std::abs(x);
    std::cout << "abs(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::abs`, and outputs the result. Use this when you need to mathematically evaluate the absolute value of x.

### `fabs(x)`
> **Description:** Returns the absolute value of a floating x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = -10.5;
    auto result = std::fabs(x);
    std::cout << "fabs(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::fabs`, and outputs the result. Use this when you need to mathematically evaluate the absolute value of a floating x.

## Trigonometric Functions

### `acos(x)`
> **Description:** Returns the arccosine of x, in radians

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 0.5;
    auto result = std::acos(x);
    std::cout << "acos(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::acos`, and outputs the result. Use this when you need to mathematically evaluate the arccosine of x, in radians.

### `asin(x)`
> **Description:** Returns the arcsine of x, in radians

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 0.5;
    auto result = std::asin(x);
    std::cout << "asin(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::asin`, and outputs the result. Use this when you need to mathematically evaluate the arcsine of x, in radians.

### `atan(x)`
> **Description:** Returns the arctangent of x as a numeric value between -PI/2 and PI/2 radians

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 1.0;
    auto result = std::atan(x);
    std::cout << "atan(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::atan`, and outputs the result. Use this when you need to mathematically evaluate the arctangent of x as a numeric value between -pi/2 and pi/2 radians.

### `atan2(y, x)`
> **Description:** Returns the angle theta from the conversion of rectangular coordinates (x, y) to polar coordinates (r, theta)

```cpp
#include <iostream>
#include <cmath>

int main() {
    double y = 10.0, x = 10.0;
    auto result = std::atan2(y, x);
    std::cout << "atan2(y, x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::atan2`, and outputs the result. Use this when you need to mathematically evaluate the angle theta from the conversion of rectangular coordinates (x, y) to polar coordinates (r, theta).

### `cos(x)`
> **Description:** Returns the cosine of x (x is in radians)

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 3.14159 / 3.0;
    auto result = std::cos(x);
    std::cout << "cos(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::cos`, and outputs the result. Use this when you need to mathematically evaluate the cosine of x (x is in radians).

### `sin(x)`
> **Description:** Returns the sine of x (x is in radians)

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 3.14159 / 6.0;
    auto result = std::sin(x);
    std::cout << "sin(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::sin`, and outputs the result. Use this when you need to mathematically evaluate the sine of x (x is in radians).

### `tan(x)`
> **Description:** Returns the tangent of x (x is in radians)

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 3.14159 / 4.0;
    auto result = std::tan(x);
    std::cout << "tan(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::tan`, and outputs the result. Use this when you need to mathematically evaluate the tangent of x (x is in radians).

## Hyperbolic Functions

### `acosh(x)`
> **Description:** Returns the hyperbolic arccosine of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.0;
    auto result = std::acosh(x);
    std::cout << "acosh(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::acosh`, and outputs the result. Use this when you need to mathematically evaluate the hyperbolic arccosine of x.

### `asinh(x)`
> **Description:** Returns the hyperbolic arcsine of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.0;
    auto result = std::asinh(x);
    std::cout << "asinh(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::asinh`, and outputs the result. Use this when you need to mathematically evaluate the hyperbolic arcsine of x.

### `atanh(x)`
> **Description:** Returns the hyperbolic arctangent of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 0.5;
    auto result = std::atanh(x);
    std::cout << "atanh(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::atanh`, and outputs the result. Use this when you need to mathematically evaluate the hyperbolic arctangent of x.

### `cosh(x)`
> **Description:** Returns the hyperbolic cosine of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 1.0;
    auto result = std::cosh(x);
    std::cout << "cosh(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::cosh`, and outputs the result. Use this when you need to mathematically evaluate the hyperbolic cosine of x.

### `sinh(x)`
> **Description:** Returns the hyperbolic sine of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 1.0;
    auto result = std::sinh(x);
    std::cout << "sinh(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::sinh`, and outputs the result. Use this when you need to mathematically evaluate the hyperbolic sine of x.

### `tanh(x)`
> **Description:** Returns the hyperbolic tangent of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 1.0;
    auto result = std::tanh(x);
    std::cout << "tanh(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::tanh`, and outputs the result. Use this when you need to mathematically evaluate the hyperbolic tangent of x.

## Exponential and Logarithmic Functions

### `exp(x)`
> **Description:** Returns the value of Ex

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.0;
    auto result = std::exp(x);
    std::cout << "exp(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::exp`, and outputs the result. Use this when you need to mathematically evaluate the value of ex.

### `exp2(x)`
> **Description:** Returns the value of 2x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 3.0;
    auto result = std::exp2(x);
    std::cout << "exp2(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::exp2`, and outputs the result. Use this when you need to mathematically evaluate the value of 2x.

### `expm1(x)`
> **Description:** Returns ex-1

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 1.0;
    auto result = std::expm1(x);
    std::cout << "expm1(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::expm1`, and outputs the result. Use this when you need to mathematically evaluate the ex-1.

### `log(x)`
> **Description:** Returns the natural logarithm of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.71828;
    auto result = std::log(x);
    std::cout << "log(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::log`, and outputs the result. Use this when you need to mathematically evaluate the natural logarithm of x.

### `log10(x)`
> **Description:** Returns the base 10 logarithm of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 100.0;
    auto result = std::log10(x);
    std::cout << "log10(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::log10`, and outputs the result. Use this when you need to mathematically evaluate the base 10 logarithm of x.

### `log1p(x)`
> **Description:** Returns the natural logarithm of x+1

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 0.0;
    auto result = std::log1p(x);
    std::cout << "log1p(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::log1p`, and outputs the result. Use this when you need to mathematically evaluate the natural logarithm of x+1.

### `log2(x)`
> **Description:** Returns the base 2 logarithm of the absolute value of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 8.0;
    auto result = std::log2(x);
    std::cout << "log2(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::log2`, and outputs the result. Use this when you need to mathematically evaluate the base 2 logarithm of the absolute value of x.

### `logb(x)`
> **Description:** Returns the floating-point base logarithm of the absolute value of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 123.45;
    auto result = std::logb(x);
    std::cout << "logb(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::logb`, and outputs the result. Use this when you need to mathematically evaluate the floating-point base logarithm of the absolute value of x.

### `ilogb(x)`
> **Description:** Returns the integer part of the floating-point base logarithm of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 123.45;
    auto result = std::ilogb(x);
    std::cout << "ilogb(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::ilogb`, and outputs the result. Use this when you need to mathematically evaluate the integer part of the floating-point base logarithm of x.

## Power and Root Functions

### `cbrt(x)`
> **Description:** Returns the cube root of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 27.0;
    auto result = std::cbrt(x);
    std::cout << "cbrt(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::cbrt`, and outputs the result. Use this when you need to mathematically evaluate the cube root of x.

### `pow(x, y)`
> **Description:** Returns the value of x to the power of y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.0, y = 3.0;
    auto result = std::pow(x, y);
    std::cout << "pow(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::pow`, and outputs the result. Use this when you need to mathematically evaluate the value of x to the power of y.

### `sqrt(x)`
> **Description:** Returns the square root of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 16.0;
    auto result = std::sqrt(x);
    std::cout << "sqrt(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::sqrt`, and outputs the result. Use this when you need to mathematically evaluate the square root of x.

### `hypot(x, y)`
> **Description:** Returns sqrt(x2 +y2) without intermediate overflow or underflow

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 3.0, y = 4.0;
    auto result = std::hypot(x, y);
    std::cout << "hypot(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::hypot`, and outputs the result. Use this when you need to mathematically evaluate the sqrt(x2 +y2) without intermediate overflow or underflow.

## Rounding and Truncation Functions

### `ceil(x)`
> **Description:** Returns the value of x rounded up to its nearest integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.3;
    auto result = std::ceil(x);
    std::cout << "ceil(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::ceil`, and outputs the result. Use this when you need to mathematically evaluate the value of x rounded up to its nearest integer.

### `floor(x)`
> **Description:** Returns the value of x rounded down to its nearest integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.8;
    auto result = std::floor(x);
    std::cout << "floor(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::floor`, and outputs the result. Use this when you need to mathematically evaluate the value of x rounded down to its nearest integer.

### `trunc(x)`
> **Description:** Returns the integer part of x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.8;
    auto result = std::trunc(x);
    std::cout << "trunc(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::trunc`, and outputs the result. Use this when you need to mathematically evaluate the integer part of x.

### `round(x)`
> **Description:** Returns x rounded to the nearest integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.5;
    auto result = std::round(x);
    std::cout << "round(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::round`, and outputs the result. Use this when you need to mathematically evaluate the x rounded to the nearest integer.

### `lround(x)`
> **Description:** Rounds x to the nearest integer and returns the result as a long integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.5;
    auto result = std::lround(x);
    std::cout << "lround(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::lround`, and outputs the result. Use this when you need to mathematically evaluate the rounds x to the nearest integer and result as a long integer.

### `llround(x)`
> **Description:** Rounds x to the nearest integer and returns the result as a long long integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.5;
    auto result = std::llround(x);
    std::cout << "llround(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::llround`, and outputs the result. Use this when you need to mathematically evaluate the rounds x to the nearest integer and result as a long long integer.

### `rint(x)`
> **Description:** Returns x rounded to a nearby integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.5;
    auto result = std::rint(x);
    std::cout << "rint(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::rint`, and outputs the result. Use this when you need to mathematically evaluate the x rounded to a nearby integer.

### `lrint(x)`
> **Description:** Rounds x to a nearby integer and returns the result as a long integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.5;
    auto result = std::lrint(x);
    std::cout << "lrint(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::lrint`, and outputs the result. Use this when you need to mathematically evaluate the rounds x to a nearby integer and result as a long integer.

### `llrint(x)`
> **Description:** Rounds x to a nearby integer and returns the result as a long long integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.5;
    auto result = std::llrint(x);
    std::cout << "llrint(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::llrint`, and outputs the result. Use this when you need to mathematically evaluate the rounds x to a nearby integer and result as a long long integer.

### `nearbyint(x)`
> **Description:** Returns x rounded to a nearby integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.5;
    auto result = std::nearbyint(x);
    std::cout << "nearbyint(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::nearbyint`, and outputs the result. Use this when you need to mathematically evaluate the x rounded to a nearby integer.

## Minimum, Maximum, and Difference

### `fdim(x, y)`
> **Description:** Returns the positive difference between x and y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 5.0, y = 3.0;
    auto result = std::fdim(x, y);
    std::cout << "fdim(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::fdim`, and outputs the result. Use this when you need to mathematically evaluate the positive difference between x and y.

### `fmax(x, y)`
> **Description:** Returns the highest value of a floating x and y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 5.0, y = 3.0;
    auto result = std::fmax(x, y);
    std::cout << "fmax(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::fmax`, and outputs the result. Use this when you need to mathematically evaluate the highest value of a floating x and y.

### `fmin(x, y)`
> **Description:** Returns the lowest value of a floating x and y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 5.0, y = 3.0;
    auto result = std::fmin(x, y);
    std::cout << "fmin(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::fmin`, and outputs the result. Use this when you need to mathematically evaluate the lowest value of a floating x and y.

### `fma(x, y, z)`
> **Description:** Returns x*y+z without losing precision

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.0, y = 3.0, z = 4.0;
    auto result = std::fma(x, y, z);
    std::cout << "fma(x, y, z) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::fma`, and outputs the result. Use this when you need to mathematically evaluate the x*y+z without losing precision.

## Remainder Functions

### `fmod(x, y)`
> **Description:** Returns the floating point remainder of x/y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 5.5, y = 2.0;
    auto result = std::fmod(x, y);
    std::cout << "fmod(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::fmod`, and outputs the result. Use this when you need to mathematically evaluate the floating point remainder of x/y.

### `remainder(x, y)`
> **Description:** Return the remainder of x/y rounded to the nearest integer

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 5.5, y = 2.0;
    auto result = std::remainder(x, y);
    std::cout << "remainder(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::remainder`, and outputs the result. Use this when you need to mathematically evaluate the return the remainder of x/y rounded to the nearest integer.

### `remquo(x, y, z)`
> **Description:** Calculates x/y rounded to the nearest integer, writes the result to the memory at the pointer z and returns the remainder.

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 10.3, y = 4.5; int quo;
    auto result = std::remquo(x, y, &quo);
    std::cout << "remquo(x, y, z) -> " << result << " (remainder), quotient: " << quo << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::remquo`, and outputs the result. Use this when you need to mathematically evaluate the calculates x/y rounded to the nearest integer, writes the result to the memory at the pointer z and remainder..

## Floating-Point Manipulation

### `copysign(x, y)`
> **Description:** Returns the first floating point x with the sign of the second floating point y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 10.0, y = -1.0;
    auto result = std::copysign(x, y);
    std::cout << "copysign(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::copysign`, and outputs the result. Use this when you need to mathematically evaluate the first floating point x with the sign of the second floating point y.

### `frexp(x, y)`
> **Description:** With x expressed as m*2n, returns the value of m (a value between 0.5 and 1.0) and writes the value of n to the memory at the pointer y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 8.0; int exp;
    auto result = std::frexp(x, &exp);
    std::cout << "frexp(x, y) -> " << result << " (mantissa), exponent: " << exp << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::frexp`, and outputs the result. Use this when you need to mathematically evaluate the with x expressed as m*2n, value of m (a value between 0.5 and 1.0) and writes the value of n to the memory at the pointer y.

### `ldexp(x, y)`
> **Description:** Returns x*2y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.0; int y = 3;
    auto result = std::ldexp(x, y);
    std::cout << "ldexp(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::ldexp`, and outputs the result. Use this when you need to mathematically evaluate the x*2y.

### `modf(x, y)`
> **Description:** Returns the decimal part of x and writes the integer part to the memory at the pointer y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 3.14159; double intpart;
    auto result = std::modf(x, &intpart);
    std::cout << "modf(x, y) -> " << result << " (fraction), integer part: " << intpart << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::modf`, and outputs the result. Use this when you need to mathematically evaluate the decimal part of x and writes the integer part to the memory at the pointer y.

### `scalbn(x, y)`
> **Description:** Returns x*Ry (R is usually 2)

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.0; int y = 3;
    auto result = std::scalbn(x, y);
    std::cout << "scalbn(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::scalbn`, and outputs the result. Use this when you need to mathematically evaluate the x*ry (r is usually 2).

### `scalbln(x, y)`
> **Description:** Returns x*Ry (R is usually 2)

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 2.0; long y = 3;
    auto result = std::scalbln(x, y);
    std::cout << "scalbln(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::scalbln`, and outputs the result. Use this when you need to mathematically evaluate the x*ry (r is usually 2).

### `nextafter(x, y)`
> **Description:** Returns the closest floating point number to x in the direction of y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 1.0, y = 2.0;
    auto result = std::nextafter(x, y);
    std::cout << "nextafter(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::nextafter`, and outputs the result. Use this when you need to mathematically evaluate the closest floating point number to x in the direction of y.

### `nexttoward(x, y)`
> **Description:** Returns the closest floating point number to x in the direction of y

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 1.0; long double y = 2.0;
    auto result = std::nexttoward(x, y);
    std::cout << "nexttoward(x, y) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::nexttoward`, and outputs the result. Use this when you need to mathematically evaluate the closest floating point number to x in the direction of y.

## Error and Gamma Functions

### `erf(x)`
> **Description:** Returns the value of the error function at x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 1.0;
    auto result = std::erf(x);
    std::cout << "erf(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::erf`, and outputs the result. Use this when you need to mathematically evaluate the value of the error function at x.

### `erfc(x)`
> **Description:** Returns the value of the complementary error function at x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 1.0;
    auto result = std::erfc(x);
    std::cout << "erfc(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::erfc`, and outputs the result. Use this when you need to mathematically evaluate the value of the complementary error function at x.

### `tgamma(x)`
> **Description:** Returns the value of the gamma function at x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 5.0;
    auto result = std::tgamma(x);
    std::cout << "tgamma(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::tgamma`, and outputs the result. Use this when you need to mathematically evaluate the value of the gamma function at x.

### `lgamma(x)`
> **Description:** Returns the logarithm of the absolute value of the gamma function at x

```cpp
#include <iostream>
#include <cmath>

int main() {
    double x = 5.0;
    auto result = std::lgamma(x);
    std::cout << "lgamma(x) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::lgamma`, and outputs the result. Use this when you need to mathematically evaluate the logarithm of the absolute value of the gamma function at x.

## Other Functions

### `nan(s)`
> **Description:** Returns a NaN (Not a Number) value

```cpp
#include <iostream>
#include <cmath>

int main() {
    const char* s = "1";
    auto result = std::nan(s);
    std::cout << "nan(s) -> " << result << std::endl;
    return 0;
}
```
**Explanation:** This snippet initializes the required variables, calls `std::nan`, and outputs the result. Use this when you need to mathematically evaluate the a nan (not a number) value.

---