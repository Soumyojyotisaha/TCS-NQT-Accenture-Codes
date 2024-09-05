#include<bits/stdc++.h>
using namespace std;
string check(int arr[],int n)
{
    string res="";
for(int i=0;i<n;i++)
{
    if(arr[i]%2==0)
    {
        res+="Even";
    }
    else
    {
        res+="Odd";
    }
}
return res;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;
    cout<<check(arr,n);
    return 0;
}