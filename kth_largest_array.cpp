#include <iostream>  
#include <bits/stdc++.h>  
using namespace std;  
  

int kth_largest_element_array(int array[], int k, int n){  
    
    sort(array, array + n);  
  
      
    reverse(array, array+n);  
  
    
    return array[k-1];  
}  
  
int main(){  
   
    int array[] = {12, 15, 7, 3, 8, 16, 25};  
  
 
    int n = sizeof(array) / sizeof(array[0]);  
  
    int k = 4;  
    cout << "The "<< k << "th largest element from the given array  is  " << kth_largest_element_array(array, k, n) << endl;  
    return 0;  
}  