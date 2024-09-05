#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of cuts on cake:";
    cin>>n;
    int sum=0;
    sum=(n*(n+1))/2;
    sum=sum+1;
    cout<<sum<<endl;
    return 0;
}