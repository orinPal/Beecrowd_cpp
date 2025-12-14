#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const double pi = 3.14159;
  double r, volume;
  cin >> r;
  volume = (4.0 / 3) * pi * r * r * r;

  cout << fixed << setprecision(3) << "VOLUME = " << volume << '\n';
  
  return 0;
}