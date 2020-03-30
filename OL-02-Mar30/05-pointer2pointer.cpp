#include <iostream>
using namespace std;
void findChar(const char* src,const char** ptr, char ch) {
   bool done = false;
   while (!done && *src) {
      if (*src == ch) {
         *ptr = src;
         done = true;
      }
      src++;
   }
}


int main() {
   char src[] = "Fred00X0000";
   const char* chptr  = nullptr;
   findChar(src, &chptr, 'X');
   cout << *chptr << endl;
   return 0;
}