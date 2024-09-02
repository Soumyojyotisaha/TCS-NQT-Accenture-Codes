#include<bits/stdc++.h>
using namespace std;
int lucky(int n,int data[])
{
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)
    {
        map[data[i]]++;
    }
    int luckysum=0;
    for(const auto &it:map)
    {
        if(it.second%2!=0)
        {
            luckysum+=it.first*it.second;
        }
    }
    return luckysum;
}
int main()
{
    int n=7;
    int data[]={11,11,12,12,13,13,13};
    cout<<lucky(n,data);
    return 0;

}