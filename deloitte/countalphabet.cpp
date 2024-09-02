#include <bits/stdc++.h>
using namespace std;

string freq(const string &str) {
    unordered_map<char, int> map;
    string ans = "";
    unordered_set<char> seen;

    // Count the frequency of each character
    for (const char &ch : str) {
        map[ch]++;
    }

    // Construct the answer string
    for (const char &ch : str) {
        if (seen.find(ch) == seen.end()) {
            ans += ch;
            ans += to_string(map[ch]);
            seen.insert(ch);
        }
    }

    return ans;
}

int main() {
    string input = "aabbcc";
    cout << freq(input) << endl;  // Output should be: "a2b2c2"
    return 0;
}
