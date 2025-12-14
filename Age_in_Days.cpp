#include <iostream>
using namespace std;

int main() {
  int day, month = 0, year = 0;
  cin >> day;
  year = day / 365;
  day %= 365;
  month = day / 30;
  day %= 30;

  cout << year << " ano(s)" << '\n';
  cout << month << " mes(es)" << '\n';
  cout << day << " dia(s)" << '\n';
  
  return 0;
}