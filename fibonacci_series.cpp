// Given a number N, figure out if it is a member of the fibonacci series or not.
//  Return true if the number of members of the fibonacci series else false.
#include <iostream>
using namespace std;

bool isFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;
    while (nextTerm <= n) {
        if (nextTerm == n) {
            return true;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }


    
    return false;
}



int main() {



    int n;



    cout << "Enter a number: ";
    cin >> n;
    if (isFibonacci(n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
