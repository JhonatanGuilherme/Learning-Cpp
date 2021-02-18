#include <iostream>

using namespace std;

// Aqui é definido num, usado no arquivo ExternAux;
auto num {10};

// Prototipagem da função também criada externamente;
void imprimirNum();

int main() {
  imprimirNum();

  return 0;
}
