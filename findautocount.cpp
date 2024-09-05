#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int FindAutoCount(const string& n) {
    if (n.empty()) {
        return 0;
    }

    int length = n.length();

    // Step 2: Check if n is an autobiographical number
    for (int i = 0; i < length; ++i) {
        int expected_count = n[i] - '0';  // Convert character to integer
        int actual_count = 0;

        // Count occurrences of digit i in the string
        for (char c : n) {
            if (c - '0' == i) {
                actual_count++;
            }
        }

        if (expected_count != actual_count) {
            return 0;
        }
    }

    // Step 3: Count distinct digits in n
    unordered_set<char> distinct_digits;
    for (char c : n) {
        distinct_digits.insert(c);
    }

    return distinct_digits.size();
}

int main() {
    cout << FindAutoCount("1210") << endl;  // Output: 3
    cout << FindAutoCount("2020") << endl;  // Output: 0 (not autobiographical)
    cout << FindAutoCount("21200") << endl; // Output: 4

    return 0;
}
