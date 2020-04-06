#include <iostream>
using namespace std;
//#define sum(a, b) ((a) + (b)) // good one
#define sum(a, b) a + b // bad one
int main() {
   int x, y;
   int m;
   cout << "Enter two ints: ";
   cin >> x >> y;  // user enterd 2 and 5;
   m = sum(x, y)*2;
   // m = x + y * 2;
   cout << "sum of " << x << " and " << y << "multiplied by 2 is: " << m << endl;
   return 0;
}