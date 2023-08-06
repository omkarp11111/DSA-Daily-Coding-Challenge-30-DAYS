// Given an unsorted array of N integers, 
// find smallest and largest element in optimal way.

#include<iostream>
using namespace std;
int main(){
    int n, i;
    //getting input from user 
    cout << "enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array element one after other " << endl;
    //getting the array element from user 
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //assigning the min and max value 
    int min=INT_MAX ,max=INT_MIN,j;
    for(j=0;j<n;j++){
        if( arr[j]<min){
            min=arr[j];
        }
        if( arr[j]>max){
            max=arr[j];
        }
    }
    //printing smallest and largest value 
    cout<<"Smallest"<<":"<<min<<endl;
    cout<<"Largest"<<":"<<max;
    return 0;

    }