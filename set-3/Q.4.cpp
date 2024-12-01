#include <iostream>
#include <string>
using namespace std;

bool isValidParentheses(const string& s) {
    int counter = 0; 
    for (char ch : s) {
        if (ch == '(') {
            counter++;  
        } else if (ch == ')') {
            counter--;  
        }
        if (counter < 0) {
            return false;
        }
    }
    return counter == 0;
}

int main() {
    string input;
    cout << "Enter a string of parentheses: ";
    cin >> input;

    if (isValidParentheses(input)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is invalid." << endl;
    }

    return 0;
}
