#include <iostream>
using namespace std;

int main() {
  int initialHr, initialMin, finalHr, finalMin;
  cin >> initialHr >> initialMin >> finalHr >> finalMin;

  int netInitialMin, netFinalMin;
  netInitialMin = (initialHr * 60) + initialMin;
  if(finalHr <= initialHr && finalMin != initialMin) {
    netFinalMin = 24* 60;
  } else if(finalHr == initialHr && finalMin == initialMin) {
    netFinalMin = ((finalHr + 24) * 60) + finalMin;
  } else {
    netFinalMin = (finalHr * 60) + finalMin;
  }
  int durationMin = netFinalMin - netInitialMin;
  int durationHr = durationMin / 60;
  durationMin %= 60;

  cout << "O JOGO DUROU " << durationHr << " HORA(S) E " << durationMin << " MINUTO(S)" << '\n';

  return 0;
}