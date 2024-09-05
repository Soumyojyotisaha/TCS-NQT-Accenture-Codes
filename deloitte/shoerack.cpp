#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int calculate(int shoe[],int n)
{
    sort(shoe,shoe+n);
    int count=fact(n);
    return count;

}
int main()
{
    int shoe[]={3,3,3};
    int n=3;
    cout<<calculate(shoe,n);
    return 0;
}