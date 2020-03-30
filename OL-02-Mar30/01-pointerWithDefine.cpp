#include <iostream>
#include "ptr.h"




using namespace std;
int main() {
   int a  = 123;
   int Pointer p = AddressOf a;
   int Pointer Pointer q = AddressOf p;
   int Pointer Pointer Pointer r = AddressOf q;
   TargetOf p = 400;
   cout << TargetOf p << " is the same as " << a << endl;
   TargetOf TargetOf q = 900;
   cout << a << endl;
   TargetOf TargetOf TargetOf r = 2000;
   cout << a << endl;
   return 0;
}