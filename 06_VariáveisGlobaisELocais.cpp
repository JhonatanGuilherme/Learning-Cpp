#include <iostream>
using namespace std;

int n1; // Definição de variáveis globais;

void counter() {
  static int count = 0;
  cout << count << " ";

  count ++;
}

int main() {
  int n2; // Definição de variáveis locais;

  for (int i = 0; i < 5; i++) {
    counter();
  }

  return 0;
}