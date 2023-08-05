// Given an array of N integers, and an integer K, the task is to 
// find the number of pairs of integers in the array whose sum is equal to K.
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i + 1 << "th element " << endl;
        cin >> arr[i];
    }
    cout << "enter the the value of k";
    cin >> k;
    int count = 0;
    for (int i; i < n; i++)
    {
        for (int j; j = i + 1; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }
    cout<<"number of pair is "<<count;
    return 0;
}