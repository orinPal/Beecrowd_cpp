#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double salary;
  int percentage;
  cin >> salary;

  if(salary <= 400.0) {
    percentage = 15;
  } else if (salary <= 800.0) {
    percentage = 12;
  } else if(salary <= 1200.0) {
    percentage = 10;
  } else if(salary <= 2000.0) {
    percentage = 7;
  } else if(salary > 2000.0) {
    percentage = 4;
  }

  double newSalary = salary + (salary * (percentage / 100.0));

  cout << fixed << setprecision(2) << "Novo salario: " << newSalary << '\n';
  cout << fixed << setprecision(2) << "Reajuste ganho: " << newSalary - salary << '\n';
  cout << "Em percentual: " << percentage << " %" << '\n';

  return 0;
}