#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double a, b, average;
  cin >> a;
  cin >> b;
  average = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);
  cout << fixed << setprecision(5) << "MEDIA = " << average << '\n';
  
  return 0;
}