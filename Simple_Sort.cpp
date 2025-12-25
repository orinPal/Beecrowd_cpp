#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int x = a, y = b, z = c;

  if (a > b) swap(a, b);
  if (a > c) swap(a, c);
  if (b > c) swap(b, c);

  cout << a << '\n';
  cout << b << '\n';
  cout << c << '\n';

  cout << '\n';
  cout << x << '\n';
  cout << y << '\n';
  cout << z << '\n';

  return 0;
}
