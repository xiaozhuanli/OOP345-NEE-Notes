// Functional - bind a function to its arguments

#include <iostream>
#include <functional>
using namespace std;
double multiply(double x, double y) { return x * y; }

int main() {
   auto p = std::bind(multiply, 10, 3);
   std::cout << "p() is actuallay multiply(10, 3): " << p() << std::endl;
   return 0;
}