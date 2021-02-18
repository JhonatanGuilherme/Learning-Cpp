#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Estrutura de Funções Lambda;
  [/*Captura de variáveis*/](/*Parâmetros*/){/*Corpo*/};

  auto maior = [](int n1, int n2) -> int {
    return n1 >= n2 ? n1 : n2;
  };

  cout << maior(2, 6) << endl;

  auto maiorLista = [](vector<int> vec) -> int {
    auto m = 0;
    for (auto &i : vec)
      m = i > m ? i: m;
    return m;
  };

  cout << maiorLista({1, 2, 8, 4, 5}) << endl;

  auto x = 2, y = 8, z = 4;

  // Aqui, dentro dos colchetes, as variáveis passadas
  // podem ser utilizadas normalmente dentro da função;
  auto somaLista = [x, y, z]() -> int {
    return x + y + z;
  };

  cout << somaLista() << endl;

  // Passando "=" nos colchetes, remete a poder utilizar
  // qualquer variável dentro da função lambda;
  auto somaListaGeral = [=]() -> int {
    return x + y + z;
  };

  cout << somaListaGeral() << endl;

  return 0;
}
