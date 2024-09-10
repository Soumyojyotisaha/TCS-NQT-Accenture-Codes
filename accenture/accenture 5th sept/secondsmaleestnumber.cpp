#include<bits/stdc++.h>
using namespace std;
int smallest(int arr[],int n)
{
    sort(arr,arr+n);
    return arr[1];
}
int main()
{
    int n=5;
    int arr[]={5,4,2,1,3};
    cout<<smallest(arr,n);
    return 0;
}