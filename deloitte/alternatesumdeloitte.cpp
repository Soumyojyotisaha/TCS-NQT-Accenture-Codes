#include<bits/stdc++.h>
using namespace std;
int smallestsum(int n,int digits[])
{
    sort(digits,digits+n);
    int num1=0,num2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            num1=num1*10+digits[i];
        }
        else
        {
            num2=num2*10+digits[i];
        }
    }
    return num1+num2;

}
int main()
{
    int n=6;
    int digits[]={6,8,5,4,2,3};
    cout<<smallestsum(n,digits);
    return 0;
}