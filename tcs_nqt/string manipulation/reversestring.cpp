#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="Hello I am Soumyo";
    stack<char>st;
    int n=str.length();

    for(int i=0;i<n;i++)
    {
        st.push(str[i]);
    }
string ans="";
char elem;
    while(!st.empty())
    {
        elem=st.top();
        st.pop();
        ans+=elem;
    }
    cout<<ans;
    return 0;
}