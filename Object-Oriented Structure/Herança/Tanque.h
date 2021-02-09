#ifndef TANQUE_H_INCLUDED
#define TANQUE_H_INCLUDED

#include "Veiculo.h"

using namespace std;

class Tanque:public Veiculo {
  public:
    Tanque();
};

Tanque::Tanque() {
  velocidade = 0;
  blindagem = 1;
  rodas = 8;
  setArmas(true);
  setTipo(3);
  setVelocidadeMaxima(200);
}

#endif //TANQUE_H_INCLUDED