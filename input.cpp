// c++ user input
#include <iostream>
#include <string>

int main() {
    int x, y;
    int sum;
    std::cout << "Enter the first number: \n";
    std::cin >> x;
    std::cout << "the second number: \n";
    std::cin >> y;
    sum = x + y;
    std::cout << "Your sum is: " << sum << std::endl;
    return 0;
}