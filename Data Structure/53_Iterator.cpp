#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> produtos = {"mouse", "teclado", "monitor", "gabinete", "impressora"};
  auto itProdutos = produtos.begin(); // Começo do vector, logo "mouse";
  auto itProdutos2 = produtos.begin();

  cout << *itProdutos << endl; // Necessário incluir *;
  itProdutos ++;
  cout << *itProdutos << endl; // Segunda posição;
  itProdutos = produtos.end() - 1; // Última posição;
  cout << *itProdutos << endl;

  itProdutos = produtos.begin();
  cout << *itProdutos << endl;

  // Advance
  advance(itProdutos, 1);
  cout << *itProdutos << endl;
  advance(itProdutos, 0);
  cout << *itProdutos << endl;
  //advance(itProdutos, 5);
  cout << *itProdutos << endl << endl;

  for (itProdutos = produtos.begin(); itProdutos != produtos.end(); itProdutos ++) {
    cout << *itProdutos << endl;
  }

  return 0;
}
