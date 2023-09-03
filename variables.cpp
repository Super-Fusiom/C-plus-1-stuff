#include <iostream>
#include <string>

// Showing all types of variables in c++
int main() {
    // Integer
    int luckyNum = 5;
    // Double
    double piNum = 3.1415;
    // Single charater
    char niceChar = 'e';
    // Strings, (requires the string lib)
    std::string stringer = "YES";
    // Boolean
    bool youCool = true; 
    // floats
    float epom = 2.335;

    // Scientific Numbers work too
    std::cout << 35e3 << std::endl;
    
    // You can also add variables together
    double sum = luckyNum + piNum;
    std::cout << sum << std::endl;
    /*
    The general rules for naming variables are:

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names
    */

    // you like constants? I know I do

    const int godNum = 1;
    std::cout << godNum;
    return 0;
}