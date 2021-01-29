#include <iostream>

using std::cout;
using std::endl;

void contador(int num, int cont = 1);

int main() {

  contador(20);

  return 0;
}

void contador(int num, int cont) {
  cout << cont << endl;
  if (num > cont)
    contador(num, ++cont);
}
