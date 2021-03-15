#include <iostream>
#include <memory>

using namespace std;

class Carro {
  public:
    int potencia;
    const char *nome;
    Carro(const char* n, int p);
    int getVelocidadeMaxima();
  private:
    int velocidadeMaxima;
};

Carro::Carro(const char* n, int p) : nome(n), potencia(p) { // Lista de inicialização
  this->velocidadeMaxima = potencia > 100 ? 200 : 150;
}

int Carro::getVelocidadeMaxima() {
  return this->velocidadeMaxima;
}

int main() {
  unique_ptr<Carro> c1 (new Carro{"Ventania", 80});
  cout << c1->nome << " - " << c1->potencia << " - " << c1->getVelocidadeMaxima() << endl;

  return 0;
}
