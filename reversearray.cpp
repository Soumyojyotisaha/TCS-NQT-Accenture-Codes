#include<bits/stdc++.h>
using namespace std;

int arrayrev(vector<int>& arr)
{
    int sum = 0;
    int n = arr.size(); // Get the size of the vector
    reverse(arr.begin(), arr.end()); // Reverse the vector
    
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            sum += arr[i]; // Sum the elements at even indices after reversing
        }
    }
    return sum;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60}; // Initialize vector
    cout << arrayrev(arr);
    return 0;
}
