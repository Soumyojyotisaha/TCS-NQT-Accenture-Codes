#include<bits/stdc++.h>
using namespace std;
void MinMax(int n)
{
    int d,mini=INT_MAX,maxi=INT_MIN;
    while(n!=0)
    {
        d=n%10;
        mini = min(mini,d);
        maxi=max(maxi,d);
        n=n/10;
    }
    
    cout<<"The minimum number is: "<<mini<<"\n"
        <<"The maximum number is: "<<maxi;
}

int main()
{
    int n = 4726;
    MinMax(n);
    return 0;
}