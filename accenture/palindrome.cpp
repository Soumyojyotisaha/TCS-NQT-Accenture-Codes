#include <iostream>
using namespace std;

int palindrome(int l, int h) {
    int count = 0;

    for (int i = l; i <= h; ++i) {
        int reverse = 0;
        int n = i;
        int d;

        // Reverse the number
        while (n != 0) {
            d = n % 10;
            reverse = reverse * 10 + d;
            n = n / 10;
        }

        // Check if it is a palindrome
        if (i == reverse) {
            ++count;
            cout << i << " ";  // Print the palindromic number
        }
    }
    cout << endl;  // Print a newline after the list of palindromic numbers

    return count;  // Return the count of palindromic numbers
}

int main() {
    int l = 10;
    int h = 80;
    int result = palindrome(l, h);
    cout << "Count of palindromic numbers: " << result << endl;
    return 0;
}
