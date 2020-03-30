#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class Employee {
   double m_salary;
   int m_empno;
   char m_name[31];
public:
   Employee(double sal, int emp, const char* nm) {
      m_salary = sal;
      m_empno = emp;
      strncpy(m_name, nm, 30);
      m_name[30] = '\0';
   }
   double salary()const {
      return m_salary;
   }
   ostream& print(ostream& os)const {
      return os << left << setw(25) << m_name << " Emno: " << setw(7) << m_empno
         << ", Salary: " << setw(10) << fixed << setprecision(2) << right << m_salary;
   }
};
ostream& operator<<(ostream& os, const Employee& E) {
   return E.print(os);
}

template <typename T>
class uPtr {
   T* m_ptr{ nullptr };
public:
   uPtr(T* ptr) :m_ptr(ptr) {}
   uPtr(const uPtr&) = delete;
   void operator=(const uPtr&) = delete;
   uPtr(uPtr&& sp) {
      m_ptr = sp.m_ptr;
      sp.m_ptr = nullptr;
   }
   uPtr& operator=(uPtr&& sp) {
      m_ptr = sp.m_ptr;
      sp.m_ptr = nullptr;
      return *this;
   }
   ~uPtr() {
      delete m_ptr;
   }
   T& operator*() {
      return *m_ptr;
   }
   T* operator->() {
      return m_ptr;
   }
};
void tax(uPtr<Employee> e) {
   cout << *e << endl;
   cout << "Tax: " << e->salary() * 0.13 << endl;
}
int main() {
   uPtr<Employee> p(new Employee(123456.78, 123, "Fred Soley"));
   uPtr<int> ptr = new int;
   cout << "int value: ";
   cin >> *ptr;
   cout << *ptr << endl;
   uPtr<int> ptr2 = move(ptr);
   cout << *ptr2 << endl;
   cout << "in main: " << *p << endl;
   tax(move(p));
   return 0;
}
