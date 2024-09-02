#include<bits/stdc++.h>
using namespace std;
int operationChoices(int c, int a, int b)
{
    if(c==1)
    {
        return a+b;
    }
    else if(c==2)
    {
        return a-b;
    }
    else if(c==3)
    {
        return a*b;
    }
    else if(c==4) 
    {
        return a/b;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int c=1,a=12,b=16;
    cout<<operationChoices(c,a,b);
    return 0;
}