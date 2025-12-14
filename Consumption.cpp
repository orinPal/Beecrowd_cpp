#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double distance, usedFuel, kmPerlitter;
  cin >> distance >> usedFuel;
  kmPerlitter = distance / usedFuel;

  cout << fixed << setprecision(3) << kmPerlitter << " km/l" << '\n';
  
  return 0;
}