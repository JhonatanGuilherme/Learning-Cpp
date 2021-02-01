#include <iostream>
#include <queue> // Biblioteca para Filas;

using std::cout;
using std::endl;
using std::string;
using std::queue;

/*
Contexto global;
std::queue<std::string> cardsQueue;
queue <string> cards;
*/

int main() {
  queue<string> cartas;
  
  if (cartas.empty())
    cout << "Fila esta vazia." << endl;
  cartas.push("Rei de Copas");
  cartas.push("Rei de Espadas");
  cartas.push("Rei de Ouros");
  cartas.push("Rei de Paus");
  cout << "Tamanho da Fila: " << cartas.size() << endl;
  cartas.pop();
  cout << "Tamanho da Fila: " << cartas.size() << endl;
  cout << cartas.front() << endl; // Elemento que entrou primeiro;
  cout << cartas.back() << endl; // Último elemento inserido;

  return 0;
}
