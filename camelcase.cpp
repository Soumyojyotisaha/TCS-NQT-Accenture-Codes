#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    string word;
    for (char c : input) {
        if (isspace(c)) {
            if (!word.empty()) {
                cout << word << endl;
                word.clear();
            }
        } else {
            word += toupper(c);
        }
    }

    if (!word.empty()) {
        cout << word << endl;
    }

    return 0;
}