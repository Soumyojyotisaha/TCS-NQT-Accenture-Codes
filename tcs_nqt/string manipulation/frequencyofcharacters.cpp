#include <iostream>
#include <map>
using namespace std;

void PrintFrequency(const string &str) {
    map<char, int> frequencyMap;

    // Count the frequency of each character
    for (char ch : str) {
        frequencyMap[ch]++;
    }

    // Print the frequency of each character
    for (const auto &entry : frequencyMap) {
        cout << entry.first << entry.second << " ";
    }
}

int main() {
    string str = "takeuforward";
    PrintFrequency(str);
    return 0;
}
