#include<bits/stdc++.h>
using namespace std;
int sortarr(vector<int>&arr)
{
    sort(arr.begin(),arr.end());
    return arr[0];
}
int main()
{
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
    cout<<sortarr(arr1)<<endl;
    cout<<sortarr(arr2);
    return 0;
}