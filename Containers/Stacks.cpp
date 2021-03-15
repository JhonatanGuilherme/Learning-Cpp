#include <iostream>
#include <stack> // Biblioteca para Pilhas;
#include <string>

using std::cout;
using std::endl;
using std::stack;
using std::string;

int main() {
  /*
  Container Pilha/Stack - Funciona de como que os elementos
  são adicionados/acessados/removidos sempre pelo final da
  coleção;
  Seu padrão é chamado de FILO (First in Last out), ou seja,
  primeiro a entrar é o último a sair;
  */
 
  stack<string> cartas;

  if (cartas.empty())
    cout << "Pilha esta vazia." << endl;
  // Através da função push(), é possível adicionar um elemento
  // no final da pilha;
  cartas.push("Rei de Copas");
  cartas.push("Rei de Espadas");
  cartas.push("Rei de Ouros");
  cartas.push("Rei de Paus");
  cout << "Tamanho da Pilha: " << cartas.size() << endl;
  // A função top() é usada para se obter o último elemento
  // adicionado;
  cout << cartas.top() << endl;
  // Enquanto a função pop() remove esse elemento;
  cartas.pop();
  cout << "Tamanho da Pilha: " << cartas.size() << endl;
  cout << cartas.top() << endl;

  return 0;
}
