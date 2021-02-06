#include <iostream>

#include "Aviao.h" // Importação do arquivo 'Aviao.h';

using namespace std;

int main() {
  Aviao *av1 = new Aviao(1, "Raio");
  Aviao *av2 = new Aviao(2, "Raio");
  Aviao *av3 = new Aviao(3, "Raio");
  av1->imprimirValores();
  return 0;
}
