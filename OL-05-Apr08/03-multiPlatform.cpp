#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
//#define FS_DEBUG 
#ifdef FS_WINDOWS
# undef FS_WINDOWS
#endif
#define FS_WINDOWS
void clearScreen();

using namespace std;
class Employee {
   double salary;
   int empno;
   char name[31];
public:
   Employee(double sal = 0.0, int emp = 0, const char* nm = "") {
      salary = sal;
      empno = emp;
      strncpy(name, nm, 30);
      name[30] = '\0';
   }
   ostream& print(ostream& os)const {
      return os << name << "," << empno << "," << fixed << setprecision(2) << salary;
   }
   ifstream& read(ifstream& ifs) {
      ifs.getline(name, 30, ',');
      ifs.ignore();
      ifs >> empno;
      ifs.ignore();
      ifs >> salary;
      ifs.ignore();
      return ifs;
   }
};
ostream& operator<<(ostream& os, const Employee& E) {
   return E.print(os);
}
ifstream& operator>>(ifstream& ifs, Employee& E) {
   return E.read(ifs);
}
bool showRec(int row, fstream& F) {
   Employee E;
   F.clear();
   F.seekg(ios::streampos((row - 1) * sizeof(Employee)));
   F.read((char*)&E, sizeof(Employee));
   if (F) cout << row << ": " << E << endl;
   return !F.fail();
}
void listEmployees(fstream& file) {
   clearScreen();
   for (int i = 1; showRec(i, file); i++);
   file.clear();
   cin.ignore(1111, '\n');
}
int main() {
   Employee E;
   Employee Freddie = { 92365.32,30369,"Freddie Soley" };
   int i = 0;
   fstream file("employee.bin", ios::in | ios::out | ios::binary);
#ifdef FS_DEBUG
   if (file) {
      cout << "file is open!" << endl;
   }
#endif // FS_DEBUG

   listEmployees(file);
   file.seekp(ios::streampos(17 * sizeof(Employee)));
   file.write((const char*)&Freddie, sizeof(Employee));
   listEmployees(file);
   return 0;
}


void clearScreen() {
#ifdef FS_WINDOWS
   system("cls");
#else
   system("clear");
#endif // Windows

}

