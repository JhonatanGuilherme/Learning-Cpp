#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

#include "Veiculo.h"

using namespace std;

class Carro:public Veiculo {
  public:
    Carro();
};

Carro::Carro() {
  velocidade = 0;
  blindagem = 0;
  rodas = 4;
  setArmas(false);
  setTipo(2);
  setVelocidadeMaxima(180);
}

#endif //CARRO_H_INCLUDED