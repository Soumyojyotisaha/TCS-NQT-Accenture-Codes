#include<bits/stdc++.h>
using namespace std;

void rotateright(vector<int>&arr,int k)
{
    int n=arr.size();
    if(n==0 ||k<=0)
    {
        return ;
    }
    k=k%n;
    if(k==0)
    {
        return;
    }

    vector<int>temp(k);
    for(int i=n-k;i<n;i++)
    {
        temp[i-(n-k)]=arr[i];
    }

    for(int i=n-k-1;i>=0;i--)
    {
        arr[i+k]=arr[i];
    }

    for(int i=0;i<k;i++)
    {
        arr[i]=temp[i];
    }
}

void RotateToLeft(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0 || k <= 0) {
        return;
    }
    k = k % n;  // To handle cases where k >= n
    if (k == 0) {
        return;
    }

    vector<int> temp(k);
    // Store the first k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the elements to the left
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Place the elements from temp back into the array
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    rotateright(arr, k);
    cout << "After Rotating the elements to the right: " << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    RotateToLeft(arr, k);
    cout << "After Rotating the elements to the left: " << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}


