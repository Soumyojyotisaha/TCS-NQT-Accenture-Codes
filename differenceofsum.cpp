#include<bits/stdc++.h>
using namespace std;
int differenceofSum (int n, int m)
{
    int sumeven=0,sumodd=0;
    for(int i=0;i<=m;i++)
    {
        if(i%n==0)
        {
        sumeven+=i;
        }
        else
        {
        sumodd+=i;    
        }
    }
    return abs(sumeven-sumodd);
}
int main()
{
    int n=3;
    int m=10;
    cout<<differenceofSum(n,m);
    return 0;
}