#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

using namespace std;

class Veiculo{
  public:
    int tipo, velocidade;
    Veiculo(int tipo);
    void alternar();
    int getVelocidadeMaxima(); // Protótipo de método GET para velocidadeMaxima;
    void imprimirValores();
  private: // Métodos e Propriedades privados só são manipulados pela própria classe;
    void setVelocidadeMaxima(int num); // Protótipo de método SET para velocidadeMaxima;
    bool ligado = false;
    int velocidadeMaxima;
    string nome;
};

Veiculo::Veiculo(int tipo) { // 1 - Carro, 2 - Avião, 3 - Navio
  this->tipo = tipo;
  if (tipo == 1) {
    this->nome = "Carro";
    velocidadeMaxima = 300;
    // 
  } else if (tipo == 2) {
    this->nome = "Aviao";
    velocidadeMaxima = 800;
  } else if (tipo == 3) {
    nome = "Navio";
    velocidadeMaxima = 150;
  }
}

void Veiculo::alternar() {
  (ligado) ? ligado = false : ligado = true;
}

int Veiculo::getVelocidadeMaxima() {
  return velocidadeMaxima;
}

void Veiculo::imprimirValores() {
  cout << endl << nome << endl;
  cout << velocidadeMaxima << endl;
  (ligado) ? cout << "O veiculo esta ligado" << endl : cout << "O veiculo esta desligado" << endl;
}

void Veiculo::setVelocidadeMaxima(int num) {
  velocidadeMaxima = num;
}

#endif // VEICULO_H_INCLUDED
