// An array contains both positive and negative numbers in random order. 
// Rearrange the array elements so that all negative numbers appear before all positive numbers.
#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
}

void rotateSubArray(int arr[], int l, int r) {
int temp = arr[r];
for (int j = r; j > l - 1; j--) {
arr[j] = arr[j - 1];
}
arr[l] = temp;
}

void moveNegative(int arr[], int n)
{

	int last_negative_index = -1;
	
	for (int i = 0; i < n; i++) {
	if (arr[i] < 0) {
		last_negative_index += 1;
		int temp = arr[i];
		arr[i] = arr[last_negative_index];
		arr[last_negative_index] = temp;
	
	
		if (i - last_negative_index >= 2)
		rotateSubArray(arr, last_negative_index + 1, i);
	}
}
}

int main()
{
	int arr[] = { 1, 2, 3, -4, -5, -6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	moveNegative(arr, n);
	printArray(arr, n);

	return 0;
}


