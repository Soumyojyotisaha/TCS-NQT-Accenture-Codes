#include<bits/stdc++.h>
using namespace std;
string helper(int n)
{
    if(n==0)
    return "No";

    int sum=0;
    while(n>0)
    {
        int r=n%10;
        sum+=r;
        n=n/10;
    }
    bool isprime=true;
    for(int i=2;i<=sqrt(sum);i++)
    {
        if(sum%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime==true)
    {
        return "Yes";
    }
    else
    return "No";
}
int main()
{
    int n=1235;
    cout<<helper(n);
    return 0;
}
