#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x= 5, n = 3;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        ans = ans * x;
    }
    cout <<x<<" raised to the power "<<n<<" is "<< ans;
}
  