#include <iostream>
#include <vector>
using namespace std;

int main() {
  int count = 0;
  vector<float> num(6);
  for(int i = 0; i < 6; i++) {
    cin >> num[i];
  }
  for(int i = 0; i < 6; i++) {
    if(num[i] > 0) count++;
  }

  cout << count << " valores positivos" << '\n';
  
  return 0;
}