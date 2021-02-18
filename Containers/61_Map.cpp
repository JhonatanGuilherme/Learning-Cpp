#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  /*
  Container Map - é utilizado como dicionário (em Python),
  há uma chave e um elemento correspondente a essa chave.

  Uma vantagem é que não é necessário definir a quantidade
  de elementos, logo, basta adicionar um elemento associando
  a uma nova chave.
  */

  map<char, string> m; // Chave - tipo char / Elemento - tipo string
  map<int, string> p; // Chave - tipo int / Elemento - tipo string

  m['a'] = "string";
  m['b'] = "string de novo";
  m['c'] = "string mais uma vez";

  p[0] = "Mouse";
  p[1] = "Teclado";
  p[2] = "Fone de Ouvido";

  cout << m['a'] << endl;

  cout << p[0] << endl;

  p.erase(1);

  for (auto &i : p)
    cout << i.second << endl;

  // Também é possível adicionar elementos pelo método insert()
  p.insert(make_pair(3, "Caixa de Som"));
  cout << p[3] << endl;

  auto itMap = p.find(0);
  cout << itMap->second << endl;

  cout << (p.find(5) == p.end() ? "Produto nao encontrado" : "Em estoque") << endl;

  p.erase(p.begin(), p.find(2));

  for (auto &i : p)
    cout << i.second << endl;

  p.clear(); // Limpar o map inteiro;

  return 0;
}
