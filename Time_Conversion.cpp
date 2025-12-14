#include <iostream>
using namespace std;

int main() {
  int second, minute = 0, hour = 0;
  cin >> second;
  hour = second / 3600;
  second %= 3600;
  minute = second / 60;
  second %= 60;

  cout << hour << ":" << minute << ":" << second << '\n';
  
  return 0;
}