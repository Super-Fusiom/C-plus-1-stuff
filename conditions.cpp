#include <iostream>

using std::cin, std::cout, std::string;

int main() {
    // The if statments
    int x = 5;
    int y = 7;
    if (x <= y){
        cout << "We in here?";
    } else {
        cout << "cant touch this";
    }

    if (y == 5){
        cout << "e";
    } else if (x == 5)
    {
       cout << "Hmm nom";
    }
    
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";

    return 0;
}
