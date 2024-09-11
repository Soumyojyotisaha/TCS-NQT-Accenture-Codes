#include<bits/stdc++.h>
using namespace std;

int freq(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
    
    // Create a map to store frequencies of elements
    map<int, int> mp;
    
    // Count the frequency of each element
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // Find the largest and second-largest elements
    int largest = arr[n - 1];
    int second_largest = -1;

    // Traverse backwards to find the second largest element
    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] != largest)
        {
            second_largest = arr[i];
            break;
        }
    }

    // Check if second largest was found
    if(second_largest == -1)
    {
        cout << "No second largest element found" << endl;
        return 0;
    }

    // Print the frequency of the second largest element
    cout << "Frequency of second largest element (" << second_largest << ") is: " << mp[second_largest] << endl;

    return 0;
}

int main()
{
    int arr[] ={2,5,4,3,1,6,9,2,3,4,4,6,8,8,7,7,9,1,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    freq(arr, n);

    return 0;
}
