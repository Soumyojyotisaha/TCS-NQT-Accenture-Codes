#include<bits/stdc++.h>
using namespace std;
int LargeSmallSum (vector < int >&arr)
{
int len=arr.size();
if(len<=3 || len==0)
{
    return 0;
}
int sum=0;
vector<int>even;
vector<int>odd;
for(int i=0;i<len;i++)
{
    if(i%2!=0)
    {
        odd.push_back(arr[i]);
    }
    else
    {
        even.push_back(arr[i]);
    }
}
sort(odd.begin(),odd.end());
sort(even.begin(),even.end());
sum=odd[1]+even[1];
return sum;
}
int main()
{
   vector < int >arr = { 3, 2, 1,6 };

  int result = LargeSmallSum(arr);
  cout << result << endl;
  return 0;   
}
