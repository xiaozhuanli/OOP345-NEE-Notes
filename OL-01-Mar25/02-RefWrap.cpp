// Functional - reference wrapper
#include <iostream>
#include <vector>
#include <functional>
using namespace std;
int main() {
   vector<int> v(6, 20);
   vector<reference_wrapper<int>>
      r(v.begin(), v.end());
   for (auto& i : v)
      i *= 3;
   for (auto i : r)
      cout << i << " ";
   cout << endl;
   return 0;
}