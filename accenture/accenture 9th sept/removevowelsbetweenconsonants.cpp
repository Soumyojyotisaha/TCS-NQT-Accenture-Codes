#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase for simplicity
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

bool isConsonant(char ch) {
    ch = tolower(ch);
    return (ch >= 'a' && ch <= 'z' && !isVowel(ch)); // Checks for a consonant
}

string removeVowelsBetweenConsonants(const string &str) {
    string result;

    for (int i = 0; i < str.length(); ++i) {
        if (!isVowel(str[i])) {
            result += str[i]; // If not a vowel, always add to result
        } else {
            if (i == 0 || i == str.length() - 1) {
                result += str[i]; // Add if vowel is at the start or end
            } else {
                if (!isConsonant(str[i - 1]) || !isConsonant(str[i + 1])) {
                    result += str[i]; // Add if not between two consonants
                }
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = removeVowelsBetweenConsonants(input);
    cout << "Result: " << result << endl;

    return 0;
}
