#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  const double pi = 3.14159;
  double r;
  cin >> r;
  double area = pi * r * r;

  cout << fixed << setprecision(4) << "A=" << area << '\n';
  
  return 0;
}