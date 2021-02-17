#include <iostream>

using namespace std;

void somador();

void somadorStatic();

int main() {
  // Static - Uma variável é inicializada em uma posição,
  // porém só uma vez dentro do programa, logo somente ocorre
  // uma inicialização.
  for (auto i = 0; i < 5; i++)
    somador();

  cout << endl;

  for (auto i = 0; i < 5; i++)
    somadorStatic();

  return 0;
}

void somador() {
  auto num = 0;
  cout << ++num << endl;
}

void somadorStatic() {
  static auto num = 0;
  cout << ++num << endl;
}
