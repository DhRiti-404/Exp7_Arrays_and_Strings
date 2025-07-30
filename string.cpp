#include <iostream>
#include <string>
using namespace std;

int main() {
    char cstr1[] = "Hello";
    char cstr2[20] = "World";

    string str1 = "Welcome";
    string str2("to");
    string str3;
    str3 = "C++ Strings";

    string str4 = str1;

    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    cout << "\n--- String Outputs ---\n";
    cout << "String 1: " << cstr1 << endl;
    cout << "String 2: " << cstr2 << endl;
    cout << "expString 1: " << str1 << endl;
    cout << "expstring 2: " << str2 << endl;
    cout << "expstring 3: " << str3 << endl;
    cout << "Copied string: " << str4 << endl;
    cout << "User input string: " << userInput << endl;

    return 0;
}
