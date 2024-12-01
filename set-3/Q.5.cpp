#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) {
    int roundCount = 0, curlyCount = 0, squareCount = 0;
	for (char ch : s) {
        if (ch == '(') {
            roundCount++;
        } else if (ch == '{') {
            curlyCount++;
        } else if (ch == '[') {
            squareCount++;
        }
        else if (ch == ')') {
            if (roundCount > 0) {
                roundCount--;
            } else {
                return false;  
            }
        } else if (ch == '}') {
            if (curlyCount > 0) {
                curlyCount--;
            } else {
                return false;  
            }
        } else if (ch == ']') {
            if (squareCount > 0) {
                squareCount--;
            } else {
                return false;  
            }
        }
    }
    return (roundCount == 0 && curlyCount == 0 && squareCount == 0);
}

int main() {
    string s;
    cout << "Enter a string of brackets: ";
    cin >> s;

    if (isValid(s)) {
        cout << "The string is valid.\n";
    } else {
        cout << "The string is not valid.\n";
    }

    return 0;
}
