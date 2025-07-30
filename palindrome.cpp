#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string cleaned = "";
    for (char ch : str) {
        if (isalnum(ch)) {
            cleaned += tolower(ch);
        }
    }

    bool isPalindrome = true;
    int len = cleaned.length();
    for (int i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
