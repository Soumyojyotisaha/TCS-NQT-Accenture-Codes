#include<bits/stdc++.h>
using namespace std;
int mid(int arr[],int n)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count++;
        }
    }
    int mid=(count+1)/2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            mid--;
            if(mid==0)
            {
                return arr[i];
            }
        }
        
    }
    return -1;
}
int main()
{
    int arr[]={1,-2,-3,4,5};
    int n=5;
    cout<<mid(arr,n);
    return 0;
}