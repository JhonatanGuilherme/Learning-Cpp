#include <iostream>
using std::cout;
using std::endl;
using std::string;

void imprimirTexto(string texto = "John");

int main() {

  imprimirTexto();

  return 0;
}

void imprimirTexto(string texto) {
  cout << texto << endl;
}
