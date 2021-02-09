#include <iostream>

#include "Carro.h"
#include "Moto.h"
#include "Tanque.h"

using namespace std;

int main() {
  Moto *moto = new Moto();
  moto->velocidade = 150;
  cout << moto->velocidade << endl;
  cout << moto->rodas << endl;
  moto->imprimirValores();

  Carro *carro = new Carro();
  carro->imprimirValores();

  Tanque *tanque = new Tanque();
  tanque->imprimirValores();

  return 0;
}