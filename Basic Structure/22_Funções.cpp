#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// É necessário declarar a função anteriormento, caso seja passado pós main;
void imprimirTexto(string a[]);
int soma(short int, short int b);

int main() {
  string a[] = {"A", "B", "C", "D", "E"};
  cout << soma(1, 2) << endl;
  imprimirTexto(a);
  cout << a->length();

  return 0;
}

void imprimirTexto(string a[]) {
  for (int i = 0; i < 5; i++)
    cout << a[i] << endl;
}

int soma(short int a, short int b) {
  return a + b;
}

