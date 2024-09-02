#include<bits/stdc++.h>
using namespace std;
vector<int>generatefibonacci(int n)
{
    vector<int>fibonacci(n);
    fibonacci[0]=1;
    fibonacci[1]=1;
    for(int i=2;i<n;i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    return fibonacci;
}
string modify(string str)
{
    int n=str.length();
    vector<int>fibonacci=generatefibonacci(n);
    int sum=0;
    string modstr="";
    for(int i=0;i<n;i++)
    {
        modstr+=str[i];
        modstr+=to_string(fibonacci[i]);
        sum+=fibonacci[i];
    }
    modstr=to_string(sum)+modstr;

    return modstr;
}
int main()
{
    string str="abcde";
    cout<<modify(str);
    return 0;
}