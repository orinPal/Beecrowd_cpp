#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  string name;
  double salary, sell, totalSalary;
  cin >> name >> salary >> sell;
  totalSalary = salary + (sell * 0.15);

  cout << fixed << setprecision(2) << "TOTAL = R$ " << totalSalary << '\n';
  
  return 0;
}