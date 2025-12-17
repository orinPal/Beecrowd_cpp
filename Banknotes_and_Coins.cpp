#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double N;
  cin >> N;

  int cents = round(N * 100);

  int notes[] = {10000, 5000, 2000, 1000, 500, 200};
  int coins[] = {100, 50, 25, 10, 5, 1};
  int count;
  cout << "NOTAS:" << '\n';
  for (int i = 0; i <= 5; i++) {
    count = cents / notes[i];
    cents %= notes[i];
    cout << count << " nota(s) de R$ " << fixed << setprecision(2) << notes[i] / 100.0 << '\n';
  }

  cout << "MOEDAS:" << '\n';
  for (int i = 0; i <= 5; i++) {
    count = cents / coins[i];
    cents %= coins[i];
    cout << count << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] / 100.0 << '\n';
  }

  return 0;
}
