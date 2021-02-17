#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

struct Pessoa {
  int idade;
  string nome;
};

class Veiculo {
  public:
    int tipo;
    string nome;
};

int main() {

  int num = 10; // Inicialização antiga;
  int num2 {10}; // Inicialização uniforme (C++11);
  string nome {"John"};
  vector<int> valores {1, 2, 3, 4, 5};
  map<string, string> capitais {{"Paraiba", "Joao Pessoa"}};

  for (auto &i : valores)
    cout << i << endl;
  
  for (auto &i : capitais)
    cout << i.first << " - " << i.second << endl;

  Pessoa p1 {20, "John"};
  cout << p1.idade << endl;
  cout << p1.nome << endl;

  Veiculo v1 {1, "Carro"}; // Sem necessidade de construtor;
  cout << v1.tipo << endl;
  cout << v1.nome << endl;

  return 0;
}
