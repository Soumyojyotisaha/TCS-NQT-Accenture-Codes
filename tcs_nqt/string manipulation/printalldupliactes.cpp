#include<bits/stdc++.h>
using namespace std;

void duplicates(string str)
{
    int n=str.length();
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[str[i]]++;
    }
    for(const auto it:mp)
    {
        if(it.second>=2)
        {
            cout<<it.first<<" "<<"occurred:"<<it.second<<" "<<"times"<<endl;
        }
    }
}
int main()
{
string str="sinstriiintng";
duplicates(str);
return 0;
}