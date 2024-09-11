#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Function to count the maximum repeated letters in a word
int maxRepeatingLetters(string word) {
    unordered_map<char, int> freq;
    int maxRepeat = 0;

    // Count frequency of each character in the word
    for (char c : word) {
        freq[c]++;
        if (freq[c] > 1) {
            maxRepeat = max(maxRepeat, freq[c]);
        }
    }

    return maxRepeat;
}

// Function to find the word with the highest number of repeated letters
string wordWithHighestRepeatedLetters(string s) {
    string word = "";
    string result = "-1";
    int maxRepeatCount = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if (!word.empty()) {
                int repeatCount = maxRepeatingLetters(word);
                if (repeatCount > maxRepeatCount) {
                    maxRepeatCount = repeatCount;
                    result = word;
                }
            }
            word = "";  // Reset current word
        } else {
            word += s[i];
        }
    }

    return result;
}

int main() {
    string s1 = "abcdefghij google microsoft";
    string s2 = "cameron blue";
    
    cout << "Word with highest repeated letters in '" << s1 << "' is: " << wordWithHighestRepeatedLetters(s1) << endl;
    cout << "Word with highest repeated letters in '" << s2 << "' is: " << wordWithHighestRepeatedLetters(s2) << endl;

    return 0;
}
