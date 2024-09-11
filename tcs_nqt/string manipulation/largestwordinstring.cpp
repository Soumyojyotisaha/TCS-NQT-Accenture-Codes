#include <iostream>
#include <string>
using namespace std;

// Function to find the largest word in a string
string findLargestWord(string s) {
    int maxLength = 0;
    string largestWord = "";
    string currentWord = "";
    
    // Iterate through the string
    for (int i = 0; i <= s.length(); i++) {
        // Check for word boundaries (space or end of string)
        if (i == s.length() || s[i] == ' ') {
            if (currentWord.length() > maxLength) {
                maxLength = currentWord.length();
                largestWord = currentWord;
            }
            currentWord = "";  // Reset current word
        } else {
            currentWord += s[i];  // Add characters to the current word
        }
    }
    
    return largestWord;
}

int main() {
    string s1 = "Google Doc";
    string s2 = "Microsoft Teams";
    
    cout << "Largest word in '" << s1 << "' is: " << findLargestWord(s1) << endl;
    cout << "Largest word in '" << s2 << "' is: " << findLargestWord(s2) << endl;
    
    return 0;
}
