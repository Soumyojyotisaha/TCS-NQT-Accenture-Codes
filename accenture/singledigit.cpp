#include<bits/stdc++.h>
using namespace std;
int task(int n)
{
    int res=0;
    if(n<9)
    {
        return n;
    }
    if(n%2!=0)
    {
        res=floor(n/2);
        return res;
    }
    else
    {
        res= floor((n-2)/2);
        return res;
    }
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<task(n);
    return 0;
}