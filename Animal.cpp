#include <iostream>
#include <string>
using namespace std;

int main() {
  string n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  if(n1 == "vertebrado") {
    if(n2 == "ave") {
      if(n3 == "carnivoro") {
        cout << "aguia" << '\n';
      } else if(n3 == "onivoro") {
        cout << "pomba" << '\n';
      }
    } else if(n2 == "mamifero") {
      if(n3 == "onivoro") {
        cout << "homem" << '\n';
      } else if(n3 == "herbivoro") {
        cout << "vaca" << '\n';
      }
    }
  } else if(n1 == "invertebrado") {
    if(n2 == "inseto") {
      if(n3 == "hematofago") {
        cout << "pulga" << '\n';
      } else if(n3 == "herbivoro") {
        cout << "lagarta" << '\n';
      }
    } else if(n2 == "anelideo") {
      if(n3 == "hematofago") {
        cout << "sanguessuga" << '\n';
      } else if(n3 == "onivoro") {
        cout << "minhoca" << '\n';
      }
    }
  }
  return 0;
}