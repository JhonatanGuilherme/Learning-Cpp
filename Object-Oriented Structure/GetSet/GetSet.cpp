#include <iostream>

#include "Veiculo.h"

using namespace std;

int main() {
  Veiculo *vc1 = new Veiculo(1);
  Veiculo *vc2 = new Veiculo(2);
  Veiculo *vc3 = new Veiculo(3);
  vc1->imprimirValores();
  vc2->alternar();
  vc2->imprimirValores();
  vc3->imprimirValores();

  // cout << vc1->velocidadeMaxima << endl; // Retorna um erro, pois a variável está privada;

  // Através do método criado, é possível retornar velocidadeMaxima;
  cout << "Velocidade Maxima: " << vc1->getVelocidadeMaxima() << endl;

  return 0;
}
