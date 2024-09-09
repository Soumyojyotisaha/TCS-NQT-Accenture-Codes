#include<bits/stdc++.h>
using namespace std;
int convert(int n)
{
    string res;
    vector<int>map;
    map.push_back(n%2);
    while(n>0)
    {
        n=n/2;
        map.push_back(n%2);
    }
    for(const auto &it:map)
    {
        res+=to_string(it);
    }
    return stoi(res);
}
int main()
{
    int n=54;
    cout<<convert(n);
    return 0;
}
