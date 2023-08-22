// Given a stack with push(), pop(), and empty() operations,
//  The task is to delete the middle element of it without
//  using any additional data structure.
#include <bits/stdc++.h>
using namespace std;


void deleteMiddle(stack<int> &s, int n,int current)
{

   if (s.empty() || current == n)
     return;
 
 
   int x = s.top();
   s.pop();

   deleteMiddle(s, n, current+1);
 

   if (current != n/2)
     s.push(x);
}

int main()
{
    stack<int> s;
 
  
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    int current = 0;
    deleteMiddle(s, s.size(),current);
 

    while (!s.empty())
    {
        int p = s.top();
        s.pop();
        cout << p << " ";
    }
    return 0;
   
}