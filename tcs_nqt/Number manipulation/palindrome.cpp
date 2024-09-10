#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n) {
    int revnum = 0;
    int dup = n;
    while(n > 0) {
        int ld = n % 10;
        revnum = (revnum * 10) + ld;
        n = n / 10;
    }
    return dup == revnum;
}

int main() {
    int n = 151;
    cout << (palindrome(n) ? "true" : "false") << endl;
    return 0;
}
