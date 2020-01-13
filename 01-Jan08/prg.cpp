#include <iostream>
using namespace std;
int main(int argc, char* argv[], char* env[]) {
   int i;
   for (i = 0; i < argc; i++) {
      cout << "arg " << i << ": " <<  argv[i] << endl;
   }
   for (i = 0; env[i]; i++) {
      cout << "arg " << i << ": " << env[i] << endl;
   }
   return 0;
}