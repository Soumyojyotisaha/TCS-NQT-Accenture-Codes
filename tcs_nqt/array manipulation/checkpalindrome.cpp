#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int minRemoval(string str) {
    unordered_map<char, int> charCount;

    for (char c : str) {
        charCount[c]++;
    }

    int oddCount = 0;
    for (auto& entry : charCount) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
    }

    return oddCount > 0 ? oddCount - 1 : 0;
}

int main() {
    string str = "madam";
    cout << minRemoval(str) << endl;
    return 0;
}
