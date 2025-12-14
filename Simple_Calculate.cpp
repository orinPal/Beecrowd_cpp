#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int code1, ammount1, code2, ammount2;
  double price1, price2, totalAmnt; 
  cin >> code1 >> ammount1 >> price1;
  cin >> code2 >> ammount2 >> price2;

  totalAmnt = (ammount1 * price1) + (ammount2 * price2);

  cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << totalAmnt << '\n';
  
  return 0;
}