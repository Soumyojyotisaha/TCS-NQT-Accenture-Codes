#include<bits/stdc++.h>
using namespace std;

int maxprod(vector<int>&nums)
{
    int result=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            int prod=1;
            for(int k=i;k<=j;k++)
            {
                prod*=nums[k];
                result=max(prod,result);
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxprod(nums);
    return 0;
}