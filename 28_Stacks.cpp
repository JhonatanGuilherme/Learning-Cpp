#include <iostream>
#include <stack> // Biblioteca para Pilhas;

using std::cout;
using std::endl;
using std::stack;
using std::string;

int main() {
  stack<string> cartas;

  if (cartas.empty())
    cout << "Pilha esta vazia." << endl;
  cartas.push("Rei de Copas");
  cartas.push("Rei de Espadas");
  cartas.push("Rei de Ouros");
  cartas.push("Rei de Paus");
  cout << "Tamanho da Pilha: " << cartas.size() << endl;
  cout << cartas.top() << endl;
  cartas.pop();
  cout << "Tamanho da Pilha: " << cartas.size() << endl;
  cout << cartas.top() << endl;

  return 0;
}
