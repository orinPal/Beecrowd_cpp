#include <iostream>
using namespace std;

int main() {
  int startHr, endHr, totalHr;
  cin >> startHr >> endHr;

  if(startHr >= endHr) {
    totalHr = (endHr + 24) - startHr;
  } else {
    totalHr = endHr - startHr;
  }

  cout << "O JOGO DUROU " << totalHr << " HORA(S)" << '\n';

  return 0;
}