#include <iostream>
#include <string>
#include <cctype>  // For isalnum() and tolower()
using namespace std;

// Function to check if a string is a palindrome (considering only alphanumeric characters)
bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        // Move start forward if it's not alphanumeric
        while (start < end && !isalnum(s[start])) {
            start++;
        }
        // Move end backward if it's not alphanumeric
        while (start < end && !isalnum(s[end])) {
            end--;
        }

        // Compare characters (ignoring case)
        if (tolower(s[start]) != tolower(s[end]))
            return false;

        start++;
        end--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // Use getline to handle spaces

    if (isPalindrome(str))
        cout << "\"" << str << "\" is a palindrome" << endl;
    else
        cout << "\"" << str << "\" is not a palindrome" << endl;

    return 0;
}
