#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double n1, n2, n3, n4;
  cin >> n1 >> n2 >> n3 >> n4;
  double average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / (2 + 3 + 4 + 1);
  cout << fixed << setprecision(1) << "Media: " << average << '\n';

  if(average >= 7.0) {
    cout << "Aluno aprovado." << '\n';
  } else if (average < 5.0) {
    cout << "Aluno reprovado." << '\n';
  } else {
    cout << "Aluno em exame." << '\n';
    double exam;
    cin >> exam;
    cout << fixed << setprecision(1) << "Nota do exame: " << exam << '\n';
    double newAvg = (average + exam) / 2;
    if(newAvg >= 5.0) {
      cout << "Aluno aprovado." << '\n';
    } else {
      cout << "Aluno reprovado." << '\n';
    }
    cout << fixed << setprecision(1) << "Media final: " << newAvg << '\n';
    
  }
  return 0;
}