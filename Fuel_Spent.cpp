#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int timeHours, averageSpeed;
  cin >> timeHours >> averageSpeed;
  double fuelConsumed = (timeHours * averageSpeed) / 12.0;

  cout << fixed << setprecision(3) << fuelConsumed << endl;

  return 0;
}
