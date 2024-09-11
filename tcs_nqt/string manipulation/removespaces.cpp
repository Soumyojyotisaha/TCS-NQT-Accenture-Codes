#include <iostream>
#include <string>
using namespace std;

string removeWhitespaces(string str) {
    string result = "";
    for (char c : str) {
        if (c != ' ' && c != '\t' && c != '\n') {
            result += c; // Append non-whitespace characters to the result
        }
    }
    return result;
}

int main() {
    string input = "This is a test string.\nRemove all whitespaces!";
    cout << "Original String: \"" << input << "\"" << endl;
    
    string noWhitespace = removeWhitespaces(input);
    cout << "String without Whitespaces: \"" << noWhitespace << "\"" << endl;

    return 0;
}
