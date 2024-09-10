#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2)
        return false;  // Numbers less than 2 are not prime

    int limit = sqrt(num);  // Calculate sqrt(num) once
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0)
            return false;  // If divisible by any number, it's not prime
    }
    return true;  // If no divisors found, it's prime
}

int main() {
    int n = 29; // Example number
    cout << (isPrime(n) ? "true" : "false") << endl;
    return 0;
}
