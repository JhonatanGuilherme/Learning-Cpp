#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

using namespace std;

class Veiculo {
  public:
    int blindagem, rodas, velocidade;
    void imprimirValores();
    void setArmas(bool armas);
    void setTipo(int tipo);
    void setVelocidadeMaxima(int velocidadeMaxima);
  private:
    bool armas;
    int tipo, velocidadeMaxima; // 1 - Moto, 2 - Carro, 3 - Caminhão, 4 - Tanque;
};

void Veiculo::imprimirValores() {
  cout << endl << "Tipo...............: " << tipo;
  cout << endl << "Possui armas.......: " << armas;
  cout << endl << "Possui blindagem...: " << blindagem;
  cout << endl << "Velocidade maxima..: " << velocidadeMaxima;
  cout << endl << "Quantidade de rodas: " << rodas << endl;
}

void Veiculo::setArmas(bool armas) {
  this->armas = armas;
}

void Veiculo::setTipo(int tipo) {
  this->tipo = tipo;
}

void Veiculo::setVelocidadeMaxima(int velocidadeMaxima) {
  this->velocidadeMaxima = velocidadeMaxima;
}

#endif // VEICULO_H_INCLUDED