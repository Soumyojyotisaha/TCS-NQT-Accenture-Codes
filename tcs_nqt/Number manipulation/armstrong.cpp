#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = log10(num) + 1; // Calculate the number of digits using logarithm
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits); // Raise each digit to the power of the number of digits
        num /= 10;
    }
    
    return sum == original; // Check if the sum of powers is equal to the original number
}

int main() {
    int n = 153; // Example number
    cout << (isArmstrong(n) ? "true" : "false") << endl;
    return 0;
}
