#include <iostream>
#include <cmath>

using std::cout;
// ITS MATH TIME

int main() {
    // Find max value of 2 (or more ) values
    cout << std::max(2, 5);
    // Same for minimum value
    cout << std::min(7, 2);
    // Using cmath, I can use functions in math that aren't common in regular math
    double test1 = 4.5;
    int test2 = 7;
    int test3 = -2;
    // abosolue value
    cout << std::abs(test3);
    cout << std::acos(test2);
    cout << std::asin(test2);
    cout << std::atan(test2);
    // cube root
    cout << std::cbrt(test2);
    // Round up or down to nearest int
    cout << std::ceil(test1);

    cout << std::cos(test2);
    cout << std::cosh(test2);
    // the E values e^x
    cout << std::exp(2);
    // e^x -1
    cout << std::expm1(3);
    // Absolute value float
    fabs(-3.1415);
    // Positive deffrence between 2 values
    fdim(2, 5);
    // Round down to nerest int
    floor(4.21);
    // Pyagrathos formula without intermediate under of overflow
    hypot(1, 2);
    // returns x*y+z wiht precision
    fma(2, 3, 5);
    // Max value (float) & min value
    fmax(2.3123, 4.2131);
    fmin(232.324234, 123132.3213);
    // returns float point remander of x and y
    fmod(23123.333, 2132123.22);
    // powers
    pow(2, 5);
    // Sin in radians
    sin(2*3.1415);
    sinh(23.2);

    tan(5);
    tanh(5);

    return 0;
}