#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;

void soma();
int soma(int a, int b);

int main() {

  soma();
  cout << soma(10, 20) << endl;

  return 0;
}

void soma() {
  int c = 10, d = 20;
  cout << "A soma de " << c << " + " << d << " eh igual a " << c + d << endl;
}

int soma(int a, int b) {
  return a + b;
}
