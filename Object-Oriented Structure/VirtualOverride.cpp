#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Veiculo {
  public:
    int velocidadeMaxima;
    string getCor(void);
    void setCor(string cor);
    string getNome(void);
    void setNome(string nome);
    virtual void imprimirValores(void); // Método virtual;
  private:
    string cor, nome;
};

string Veiculo::getCor(void) { return cor; }
void Veiculo::setCor(string cor) { this->cor = cor; }
string Veiculo::getNome(void) { return nome; }
void Veiculo::setNome(string nome) { this->nome = nome; }
void Veiculo::imprimirValores(void) {
  cout << "Nome.....: " << getNome() << endl;
  cout << "Cor......: " << getCor() << endl;
  cout << "Vel. Max.: " << velocidadeMaxima << endl << endl;
}

class Carro:public Veiculo { // Herança
  public:
    Carro(void);
};

Carro::Carro(void) {
  setCor("Vermelho");
  setNome("Carro");
  this->velocidadeMaxima = 200;
}

class Moto:public Veiculo {
  public:
    Moto(void);
};

Moto::Moto(void) {
  setCor("Preto");
  setNome("Moto");
  this->velocidadeMaxima = 260;
}

class Militar:public Veiculo {
  public:
    bool armamento;
    Militar(bool armamento);
    void imprimirValores(void) override; // Sobrescrevendo uma função virtual
};

Militar::Militar(bool armamento) {
  setCor("Verde");
  setNome("Militar");
  this->velocidadeMaxima = 160;
  this->armamento = armamento;
}

void Militar::imprimirValores(void) {
  cout << "Nome.....: " << getNome() << endl;
  cout << "Cor......: " << getCor() << endl;
  cout << "Vel. Max.: " << velocidadeMaxima << endl;
  cout << "Armamento: " << armamento << endl << endl;
}

int main(void) {
  unique_ptr<Carro> c1 (new Carro);
  unique_ptr<Militar> m1 (new Militar(true));
  
  c1->imprimirValores();
  m1->imprimirValores();

  return 0;
}
