#include <iostream>
#include <map>
using namespace std;

void printNonRepeatingCharacters(const string &str) {
    map<char, int> frequencyMap;

    // Count the frequency of each character
    for (char ch : str) {
        frequencyMap[ch]++;
    }

    // Print non-repeating characters
    for (const auto &entry : frequencyMap) {
        if (entry.second == 1) {
            cout << entry.first << ",";
        }
    }
}

int main() {
    string str1 = "google";
    cout << "Non-repeating characters in \"" << str1 << "\": ";
    printNonRepeatingCharacters(str1);
    cout << endl;

    string str2 = "yahoo";
    cout << "Non-repeating characters in \"" << str2 << "\": ";
    printNonRepeatingCharacters(str2);
    cout << endl;

    return 0;
}
