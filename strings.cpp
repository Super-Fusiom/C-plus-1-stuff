#include <iostream>
using std::string, std::cout, std::cin, std::endl;

int main() {
    // Combine strings
    string e = "lmao";
    string r = "bozo";
    string final = e + r;
    cout << final << endl;
    // string size
    string text = "asdfghjklqwertyuiopzxcvbnm";
    cout << "length of text is " << text.size(); 
    // Access the string using index
    string k = "konsole";
    cout << k[1];

    // Indidual letters can be changed
    k[0] = 'C';
    cout << k;

    // Sometimes we want backslashs and quote marks
    cout << 'I\'ve said "no im god"\n' << "\t WE ARE!!!";
    
    // Inputs work too
    string god;
    cout << "Enter your name: \n";
    cin >> god;
    cout << "Hello " << god;
    // However this only works on one word
    // For more then one word, getline is used
    string jebuz;
    cout << "Enter your name: \n";
    getline (cin, jebuz);
    cout << "Hello " << god;


    return 0;
}