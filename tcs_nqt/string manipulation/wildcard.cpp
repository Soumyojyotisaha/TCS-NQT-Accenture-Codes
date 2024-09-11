#include <iostream>
#include <vector>
using namespace std;

bool isMatch(const string &s, const string &p, int i, int j, vector<vector<int>> &memo) {
    // Base cases
    if (i == s.size() && j == p.size()) return true;  // Both strings completely matched
    if (j == p.size()) return false;  // Pattern exhausted but string still remains
    if (i == s.size()) {
        // Only case where string is exhausted but pattern remains, '*' can match empty sequence
        return p[j] == '*' ? isMatch(s, p, i, j + 1, memo) : false;
    }

    // Memoization check
    if (memo[i][j] != -1) return memo[i][j];

    bool match = false;

    if (p[j] == '*') {
        // '*' can match zero or more characters:
        // Case 1: Match zero characters (move to next character in pattern)
        // Case 2: Match one or more characters (move to next character in string)
        match = isMatch(s, p, i + 1, j, memo) || isMatch(s, p, i, j + 1, memo);
    } else if (p[j] == '?' || p[j] == s[i]) {
        // '?' can match any single character or exact match for current characters
        match = isMatch(s, p, i + 1, j + 1, memo);
    }

    // Store the result in memo
    memo[i][j] = match;
    return match;
}

bool isMatch(const string &s, const string &p) {
    // Create a memoization table initialized to -1
    vector<vector<int>> memo(s.size() + 1, vector<int>(p.size() + 1, -1));
    
    // Start checking the strings from the first character
    return isMatch(s, p, 0, 0, memo);
}

int main() {
    string s = "abefcdgiescdfimde";
    string p = "ab*cd?i*de";
    
    if (isMatch(s, p)) {
        cout << "The strings match!" << endl;
    } else {
        cout << "The strings do not match!" << endl;
    }
    
    return 0;
}
