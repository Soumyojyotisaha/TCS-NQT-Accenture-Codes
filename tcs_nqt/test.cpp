#include<bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int palindrome(int n)
{
    return (n == reverse(n)) ? 1 : -1;
}

int check(int n)
{
    int sum = n + reverse(n);
    while (palindrome(sum) == -1)
    {
        n = sum;
        sum = n + reverse(n);
    }
    return sum;  // Return the palindrome sum
}

int main()
{
    int n = 3523;
    cout << check(n);
    return 0;
}
