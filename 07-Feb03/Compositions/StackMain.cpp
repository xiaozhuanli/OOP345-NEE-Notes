#include <iostream>
#include <string>
using namespace std;
#include "Stack.h"


int main() {
   Stack<double> d;
   Stack<string> s;
   d.push(1.2).push(2.3).push(3.5);
   s.push("One").push("Two").push("Three").push("Four");
   cout << d.depth() << " doubles in the Stack \"d\"" << endl;
   cout << s.depth() << " strings in the Stack \"s\"" << endl;
   while (d) {
      cout << d.pop() << endl;
   }
   while (s) {
      cout << s.pop() << endl;
   }
   return 0;
}