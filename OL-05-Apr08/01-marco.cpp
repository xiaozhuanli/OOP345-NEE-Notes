#include <iostream>
using namespace std;
#define max(a, b) a > b ? a : b
void getnums() {
   int i, j;
   int m;
   cout << "Enter two ints: ";
   cin >> i >> j;
   m = max(j, i);
   cout << "The larger value is: " << m << endl;
}
int main() {
   int x, y;
   int m;
   cout << "Enter two ints: ";
   cin >> x >> y;
   m = max(x, y);
   getnums();
   cout << "The larger value is: " << m << endl;
   cout << "Enter two ints: ";
   cin >> x >> y;
   m = max(x, y);
   cout << "The larger value is: " << m << endl;
   return 0;
}