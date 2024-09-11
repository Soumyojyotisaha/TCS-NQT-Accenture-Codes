#include<bits/stdc++.h>
using namespace std;
int words(string str,int n)
{
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    return count;

}
int  main()
{
    string str="HI AMY AND JAY";
    int n=str.length();
    cout<<words(str,n);
    return 0;
}