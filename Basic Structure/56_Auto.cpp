#include <iostream>
#include <vector>

using namespace std;

int soma(int, int);

auto somaAuto(int, int) -> int; // Necessário definir o tipo de retorno;

int main() {
  auto num = 0; // É necessário inicializar com um valor;
  cout << num << endl;

  int resultado = soma(2, 3);
  cout << resultado << endl;

  auto resultadoAuto = somaAuto(5, 6);
  cout << resultadoAuto << endl;

  vector<int> v{10, 20, 30, 40, 50};

  for (auto &i : v)
    cout << i << endl;

  return 0;
}

int soma(int n1, int n2) {
  return n1 + n2;
}

auto somaAuto(int n1, int n2) -> int {
  return n1 + n2;
}
