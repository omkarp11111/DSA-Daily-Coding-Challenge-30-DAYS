#include <iostream>
#include <deque>
using namespace std;

void printFirstNegative(int arr[], int n, int k) {
    deque<int> dq;


    int i;
    for (i = 0; i < k; i++) {
        if (arr[i] < 0)
            dq.push_back(i);
    }

    
    for (; i < n; i++) {
      
        if (!dq.empty()) {
            cout << arr[dq.front()] << " ";
        } else {
            cout << "0 ";
        }

       
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        
        if (arr[i] < 0) {
            dq.push_back(i);
        }
    }

 
    if (!dq.empty()) {
        cout << arr[dq.front()] << " ";
    } else {
        cout << "0 ";
    }
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    printFirstNegative(arr, n, k);

    return 0;
}
