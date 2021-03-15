#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

#include "Veiculo.h"

// Assim, podemos dizer que Moto é classe filha da classe Veiculo;
class Moto:public Veiculo { // Todas as propriedades de Veiculo foram herdadas por Moto;
  public:
    Moto();
};

Moto::Moto() {
  velocidade = 0;
  blindagem = 0;
  rodas = 2;
  setArmas(false);
  setTipo(1);
  setVelocidadeMaxima(120);
}

#endif // MOTO_H_INCLUDED