#include<bits/stdc++.h>
using namespace std;
int findCount(int arr[], int length, int num, int diff)
{
    bool found=false;
    int count=0;
    for(int i=0;i<length;i++)
    {
        if(abs(arr[i]-num)<=diff)
        {
            count++;found=true;
        }
    }
    if(found==true)
    {
        return count;
    }
    else
    {
        return -1;
    }
}
int main()
{
  int arr[]={12, 3, 14, 56, 77, 13};
  int length=sizeof(arr)/sizeof(arr[0]);
  int num=57;
  int diff=2;  
  cout<<findCount(arr,length,num,diff);
  return 0;
}
