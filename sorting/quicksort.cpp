#include <iostream>
using namespace std;

int partition(int arr[], int l, int r) {
    int pivot = arr[r];  // Pivot element
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);  // Swap elements smaller than the pivot
        }
    }
    swap(arr[i + 1], arr[r]);  // Swap the pivot element
    return i + 1;
}

void quickSort(int arr[], int l, int r) {
    if (l < r) {
        int pi = partition(arr, l, r);  // Partitioning index
        quickSort(arr, l, pi - 1);      // Sort left part
        quickSort(arr, pi + 1, r);      // Sort right part
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "\nSorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
