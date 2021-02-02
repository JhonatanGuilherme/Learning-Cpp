#include <iostream>

using namespace std;

int main() {
  int inteiro = 0; // Padrão 0;
  double decimal = 2.5;
  float real = 3.8;
  char letra = 'a';
  char nome[20] = "Teste a";
  string nomeStr = "Teste a";
  bool booleano = true;

  cout << inteiro << endl;
  cout << decimal << endl;
  cout << real << endl;
  cout << letra << endl;
  cout << nome << endl;
  cout << nomeStr << endl;
  cout << booleano << endl;

  cout << "Digite um numero: ";
  cin >> inteiro;
  cout << "O numero digitado foi " << inteiro;

  return 0;
}
