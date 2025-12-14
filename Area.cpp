#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  double areaOfTriangle = 0.5 * a * c;
  double areaOfCircle = 3.14159 * c * c;
  double areaOfTrapezium = 0.5 * (a + b) * c;
  double areaOfSquare = b * b;
  double areaOfRectangle = a * b;

  cout << fixed << setprecision(3) << "TRIANGULO: " << areaOfTriangle << '\n';
  cout << fixed << setprecision(3) << "CIRCULO: " << areaOfCircle << '\n';
  cout << fixed << setprecision(3) << "TRAPEZIO: " << areaOfTrapezium << '\n';
  cout << fixed << setprecision(3) << "QUADRADO: " << areaOfSquare << '\n';
  cout << fixed << setprecision(3) << "RETANGULO: " << areaOfRectangle << '\n';
  
  
  return 0;
}