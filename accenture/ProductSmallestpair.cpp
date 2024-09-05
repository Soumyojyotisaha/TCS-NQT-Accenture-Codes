#include<bits/stdc++.h>
using namespace std;
int productSmallestPair (int *array, int n, int sum)
{
    int prod=1;
    if(n<2)
    {
        return -1;
    }
    sort(array,array+n);
    if(array[0]+array[1]<=sum)
    {
        prod=array[0]*array[1];
    }
    else
    {
        return 0;
    }
}
int main()
{
    int sum=4;
    int n=6;
    int array[]={9,8,3,-7,3,9};
    cout<<productSmallestPair(array,n,sum);
    return 0;
}