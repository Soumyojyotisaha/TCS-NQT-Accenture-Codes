#include <iostream>
#include <cmath>
using namespace std;

int sumofdiagonal(int m, int n, int **a) {
    int sum = 0;

    // Sum the main diagonal elements
    for (int i = 0; i < min(m, n); i++) {
        sum += a[i][i];
    }

    // If matrix is not square, add the absolute difference of m and n to sum
    if (m != n) {
        sum += abs(m - n);
    }

    return sum;
}

int main() {
    int m = 3, n = 6;

    // Dynamically allocate memory for a 2D array
    int **a = new int*[m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
    }

    // Initialize the array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = j + 1;
        }
    }

    // Call the function and print the result
    cout << "Sum of diagonal elements: " << sumofdiagonal(m, n, a) << endl;

    // Deallocate the memory
    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
