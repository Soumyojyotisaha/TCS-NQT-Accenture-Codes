#include<bits/stdc++.h>
using namespace std;

int remainder(int n) {
    if(n % 2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
  }

int main() {
    int n = 5;
    cout<<(remainder(n)?"Even":"Odd");
    return 0;
}
