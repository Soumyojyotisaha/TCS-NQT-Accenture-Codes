#include<bits/stdc++.h>
using namespace std;
int countbits(int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(bitset<32>(i).count()==k)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n=7,k=2;
    cout<<countbits(n,k);
    return 0;
}