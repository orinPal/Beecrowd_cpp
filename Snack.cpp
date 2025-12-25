#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int productCode, quantity;
  cin >> productCode >> quantity ;

  double price[] = {0.00, 4.00, 4.50, 5.00, 2.00, 1.50};
  double totalPrice = price[productCode] * quantity;

  cout << fixed << setprecision(2) << "Total: R$ " << totalPrice << '\n';
  return 0;
}