#include <iostream>
#include <queue> // Biblioteca para Filas;
#include <string>

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
  /*
  Container Fila/Queue - Funciona de como que os elementos
  são adicionados sempre pelo final da coleção, porém os
  elemento no início da coleção que são acessados/removidos;
  Seu padrão é chamado de FIFO (First in First out), ou seja,
  primeiro a entrar é o primeiro a sair;
  */

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
