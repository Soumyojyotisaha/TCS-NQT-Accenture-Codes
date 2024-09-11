#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>memo;

int count(const string &s1, const string &s2, int i, int j) 
{
    if(i==0||j==0)
    {
        return 0;
    }
    if(memo[i][j]!=-1)
    return memo[i][j];

    if(s1[i-1]==s2[j-1])
    {
        memo[i][j]=count(s1,s2,i-1,j)+count(s1,s2,i,j-1)+1;
    }
    else
    {
        memo[i][j]=count(s1,s2,i-1,j)+count(s1,s2,i,j-1)-count(s1,s2,i-1,j-1);
    }
    return memo[i][j];
}
int subsequences(const string &s1, const string &s2)
{
    int n=s1.size();
    int m=s2.size();

    memo.assign(n+1,vector<int>(m+1,-1));

    return count(s1,s2,n,m);
}
int main()
{
    string s1="abc";
    string s2="ac";
    int result=subsequences(s1,s2);
    cout<<result;
    return 0;
}
