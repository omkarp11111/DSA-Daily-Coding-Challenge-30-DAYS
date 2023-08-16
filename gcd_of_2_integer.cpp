// Find the GCD (Greatest Common Divisor) of 2 integers. 
// The GCD of any 2 numbers is the largest number that divides both the integers.
#include <iostream>
using namespace std;



int gcd(int a, int b) {

  if (b == 0)
    return a;


  else
    return gcd(b, a % b);
}



int main() {
  int x, y;
  cout << "Enter two positive integers: ";
  cin >> x >> y;


  cout << "The GCD of " << x << " and " << y << " is " << gcd(x, y) << endl;
  return 0;
}
