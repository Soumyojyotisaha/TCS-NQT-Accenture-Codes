#include<bits/stdc++.h>
using namespace std;

int checkprime(int n) {
    if (n <= 1) return 0;  // Numbers 0 and 1 are not prime
    
    for (int i = 2; i <= sqrt(n); i++) {  // Loop from 2 to sqrt(n)
        if (n % i == 0) {  // Check if n is divisible by any i
            return 0;  // If divisible, n is not prime
        }
    }
    return 1;  // If no divisors, n is prime
}

int summ(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        if(checkprime(i))
        {
            sum+=i;
        }
    }
    return sum;   
}

int main() {
    int n;
    cin >> n;
    cout<<summ(n);
    return 0;
}
