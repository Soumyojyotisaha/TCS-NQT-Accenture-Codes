#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);  // Convert character to lowercase for easy comparison
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string removeVowels(string str) {
    string result = "";
    for (char c : str) {
        if (!isVowel(c)) {
            result += c;  // Append non-vowel characters to the result
        }
    }
    return result;
}

int main() {
    string input = "Remove vowels from this string!";
    cout << "Original String: \"" << input << "\"" << endl;
    
    string noVowels = removeVowels(input);
    cout << "String without Vowels: \"" << noVowels << "\"" << endl;

    return 0;
}
