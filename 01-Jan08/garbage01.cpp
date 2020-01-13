#include <iostream>
using namespace std;


typedef const int c_Int; // defines the constInt type 
const int a = 12;
c_Int b = 12;

typedef int* intptr;

intptr a;

typedef
struct  {
   char first[21];
   char last[31];
}
Name;

void faa() {
   Name N;
}
void foo() {
   static int a = 1;
   cout << a++ << endl;
}
int main() {
   for (int i = 0; i < 10; i++) {
      foo();
   }
   return 0;
}