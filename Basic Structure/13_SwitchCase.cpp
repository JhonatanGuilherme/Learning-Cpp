#include <iostream>
using std::cout;
using std::endl;

int main() {
  int A = 50;
  switch (A) {
    case 50:
      cout << "Igual a 50." << endl;
      break;
    default:
      cout << "Diferente de 50." << endl;
  }

  return 0;
}
