#include<bits/stdc++.h>
using namespace std;
int freq(int arr[],int n)
{
    sort(arr,arr+n);
    set<int>st;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
        mp[arr[i]]++;
    }
    auto it = st.rbegin();   
    ++it;  
    int second=*it;

   return mp[second];
}
int main()
{
    int arr[]={2,5,4,3,1,6,9,2,3,4,4,6,8,8,7,7,9,1,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<freq(arr,n);
    return 0;
}