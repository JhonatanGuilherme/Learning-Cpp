#include <iostream>
#include <memory>

using namespace std;

class Carro {
  public:
    int potencia, velocidadeMaxima;
    const char *nome;
    Carro(const char* n, int p) : nome(n), potencia(p) { // Lista de inicialização
      this->velocidadeMaxima = potencia > 100 ? 200 : 150;
    } 
};

int main() {
  // Inicialização tradicional de um objeto
  Carro *c1 = new Carro("Relampago", 120);
  cout << c1->nome << " - " << c1->potencia << " - " << c1->velocidadeMaxima << endl;

  delete c1;

  // Inicialização moderna
  unique_ptr<Carro> c2 (new Carro{"Ventania", 80});
  cout << c2->nome << " - " << c2->potencia << " - " << c2->velocidadeMaxima << endl;

  Carro c3 {"Tornado", 150};
  cout << c3.nome << " - " << c3.potencia << " - " << c3.velocidadeMaxima << endl;

  return 0;
}
