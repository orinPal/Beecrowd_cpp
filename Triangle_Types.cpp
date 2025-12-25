#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  if (a < b) swap(a, b);
  if (a < c) swap(a, c);
  if (b < c) swap(b, c);

  if (a >= b + c) {
    cout << "NAO FORMA TRIANGULO" << '\n';
    return 0;
  }

  if (a * a == b * b + c * c)
    cout << "TRIANGULO RETANGULO" << '\n';
  else if (a * a > b * b + c * c)
    cout << "TRIANGULO OBTUSANGULO" << '\n';
  else
    cout << "TRIANGULO ACUTANGULO" << '\n';

  if (a == b && b == c)
    cout << "TRIANGULO EQUILATERO" << '\n';
  else if (a == b || b == c || a == c)
    cout << "TRIANGULO ISOSCELES" << '\n';

  return 0;
}
