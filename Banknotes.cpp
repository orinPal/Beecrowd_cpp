#include <iostream>
using namespace std;

int main() {
  int totalMoney;
  cin >> totalMoney;
  int note1, note2, note5, note10, note20, note50, note100, money;
  money = totalMoney;
  note100 = money / 100;
  money %= 100;
  note50 = money / 50;
  money %= 50;
  note20 = money / 20;
  money %= 20;
  note10 = money / 10;
  money %= 10;
  note5 = money / 5;
  money %= 5;
  note2 = money / 2;
  money %= 2;
  note1 = money;

  cout << totalMoney << '\n';
  cout << note100 << " nota(s) de R$ 100,00" << '\n';
  cout << note50 << " nota(s) de R$ 50,00" << '\n';
  cout << note20 << " nota(s) de R$ 20,00" << '\n';
  cout << note10 << " nota(s) de R$ 10,00" << '\n';
  cout << note5 << " nota(s) de R$ 5,00" << '\n';
  cout << note2 << " nota(s) de R$ 2,00" << '\n';
  cout << note1 << " nota(s) de R$ 1,00" << '\n';
  
  return 0;
}