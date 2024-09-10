#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> getPrimeFactors(int n){
    vector<int> primeFactors;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            primeFactors.push_back(i);
        }
        while(n % i == 0){
            n = n / i;
        }
    }
    return primeFactors;
}

int main() {
    int n = 60;
    vector<int> ans = getPrimeFactors(n);
    cout << "Prime Factors for " << n << ": ";
    for(auto factor: ans){
        cout << factor << " ";
    }
    cout << endl;
}