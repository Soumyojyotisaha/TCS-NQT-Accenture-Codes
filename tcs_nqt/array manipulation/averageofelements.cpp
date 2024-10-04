#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 5;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (double)arr[i];
	}
	double average = sum / n;
	cout << "The average is "<<average;

}