#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float a, b, c;
  cin >> a >> b >> c;
  if(a + b > c && a + c > b && b + c > a) {
    cout << fixed << setprecision(1) << "Perimetro = " << a + b + c << '\n';
  } else {
    cout << fixed << setprecision(1) << "Area = " << 0.5 * (a + b) * c << '\n';
  }
  return 0;
}