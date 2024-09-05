#include <iostream>
using namespace std;
int magicalshoes(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%3==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]={12,21,3,4};
    int n=4;
    cout<<magicalshoes(arr,n);
    return 0;
}