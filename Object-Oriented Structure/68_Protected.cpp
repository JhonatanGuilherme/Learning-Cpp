#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Veiculo {
  private:
    int potencia, velocidadeMaxima;
  public:
    int rodas;
    string nome;
  protected: // Permite acessar membros em classes filhas;
    int portas;
    string cor;
};

class Carro:public Veiculo {
  public:
    Carro(void);
    void imprimirValores(void);
};

Carro::Carro() {
  rodas = 4;
  nome = "Carro";
  portas = 4;
  cor = "Vermelho";
}

void Carro::imprimirValores(void) {
  cout << "Rodas.: " << rodas << endl;
  cout << "Nome..: " << nome << endl;
  cout << "Portas: " << portas << endl;
  cout << "Cor...: " << cor << endl;
}

int main() {
  unique_ptr<Carro> c1 (new Carro);
  c1->imprimirValores();

  return 0;
}
