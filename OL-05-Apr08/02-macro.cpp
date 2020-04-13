#include <iostream>
using namespace std;
#define PI 3.14159265

#define sum(a, b) ((a) + (b)) // good one
//#define sum(a, b) a + b // bad one
//int sum(int a, int b) {
//   return a + b;
//}

int main() {
   int x, y, z = 23;
   double d = 2.345;
   int m;
   cout << "Enter two ints: ";
   cin >> x >> y;  // user enterd 2 and 5;
   m = sum(x, y)*2;
   // m = x + y * 2;
   m = sum(x, y * z + 3) * 10;
   // x + y * z + 3 * 10  bad expansion
   // ((x) + (y * z + 3)) * 10; // good expansion 
   cout << "sum of " << x << " and " << y << "multiplied by 2 is: " << m << endl;
   sum(d, x);
   return 0;
}