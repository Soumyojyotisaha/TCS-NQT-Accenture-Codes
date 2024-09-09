#include <iostream>
#include <string>
using namespace std;

int max_favourite_songs(string s, int k) {
    int max_count = 0;

    // Outer loop to check each possible starting position of the playlist
    for (int i = 0; i <= s.length() - k; i++) {
        int current_count = 0;

        // Inner loop to check the substring of length k starting from i
        for (int j = i; j < i + k; j++) {
            if (s[j] == 'a') {
                current_count++;
            }
        }

        // Update max_count if we find a better playlist with more 'a'
        max_count = max(max_count, current_count);
    }

    return max_count;
}

int main() {
    string s;
    int k;

    // Input string and k
    cout << "Enter the string of songs: ";
    cin >> s;
    cout << "Enter the value of k: ";
    cin >> k;

    // Output the result
    cout << "Maximum number of favourite songs (a) in a playlist: " << max_favourite_songs(s, k) << endl;

    return 0;
}
