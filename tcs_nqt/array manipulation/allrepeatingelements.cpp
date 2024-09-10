#include<bits/stdc++.h>
using namespace std;
void findrepeat(vector<int>&arr)
{
    unordered_map<int,int>mp;
    for(auto i:arr)
    {
        mp[i]++;
    }
    cout<<"the repeating elements are :"<<endl;
    for(auto it:mp)
    {
        if(it.second>1)
        {
            cout<<it.first<<" "<<"frequency is:"<<it.second <<endl;
        }
    }
}
int main()
{
    vector<int> arr={1,1,1,2,3,3,3,3,5,6};
    findrepeat(arr);
    return 0;
}