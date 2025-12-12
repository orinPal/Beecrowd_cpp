#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double a, b, c, average;
  cin >> a;
  cin >> b;
  cin >> c;
  average = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 +5);
  cout << fixed << setprecision(1) << "MEDIA = " << average << '\n';
  
  return 0;
}