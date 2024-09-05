#include<bits/stdc++.h>
using namespace std;
int findequilibrium(int arr[],int n )
{
    int totalsum=0,leftsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        totalsum-=arr[i];
        if(leftsum==totalsum)
        {
            return i;
        }
        else
        {
            leftsum+=arr[i];

        }
    }
    return -1;
}
int main() {
    int n;
    
    // Input array size
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Find and print the equilibrium index
    int result = findequilibrium(arr, n);
    if (result != -1) {
        cout << "Equilibrium point is at index: " << result << endl;
    } else {
        cout << "No equilibrium point found." << endl;
    }

    return 0;
}