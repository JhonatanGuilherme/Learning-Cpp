#include <iostream>

using namespace std;

struct Carro {
  string cor, nome;
  unsigned short int potencia;

  void inserirValores(string stCor, string stNome, unsigned short int stPotencia = 0) {
    cor = stCor;
    nome = stNome;
    potencia = stPotencia;
  }

  void mostrarValores() {
    cout << "Cor: " << cor << endl;
    cout << "Nome: " << nome << endl;
    cout << "Potencia: " << potencia << endl;
  }
};

int main() {
  Carro carro1, carro2;
  Carro carrosArr[5];
  Carro *carrosPtr = new Carro[5]; // Ponteiro para lista de Carros;

  carrosArr[0].nome = "Array car";
  cout << carrosArr[0].nome << endl;
  carrosPtr[0].nome = "Pointer car";
  cout << carrosPtr[0].nome << endl;

  carrosArr[1].inserirValores("Vermelho", "Tornado", 200);
  carrosPtr[1].inserirValores("Preto", "Luxo", 260);
  sizeof(carrosPtr);

  carro1.cor = "Azul";
  cout << "A cor do carro eh: " << carro1.cor << endl;
  carro1.nome = 
  carro1.potencia = 150;
  cout << "A potencia do carro eh: " << carro1.potencia << endl;

  carro2.inserirValores("Vermelho", "Katchan", 250);
  carro2.mostrarValores();

  return 0;
}
