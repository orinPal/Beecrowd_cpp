#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int empNum;
  double hr, salPerHr;
  cin >> empNum;
  cin >> hr >> salPerHr;
  cout << "NUMBER = " << empNum << '\n';
  cout << fixed << setprecision(2) << "SALARY = U$ " << (hr * salPerHr) << '\n';
  
  return 0;
}