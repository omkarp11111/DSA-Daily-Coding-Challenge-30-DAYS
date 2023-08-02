// Given a sorted array arr[] and a number x,
// write a function that counts the occurrences
//  of x in arr[]
#include <iostream>
using namespace std;
int count_occurrence_x(int arr[], int n, int x)
{
    int count = 0;
    int k;
    for (k = 0; k < n; k++)
    {
        if (x == arr[k])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n, i, x;
    cout << "enter the size of array " << endl;
    cin >> n;
    int arr1[n];
    cout << "enter the array element one after other " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    // cout << "array is " << arr1;
    cout << "enter the x " << endl;
    cin >> x;
    cout << "count of " << x << " is " << count_occurrence_x(arr1, n, x);
    return 0;
}