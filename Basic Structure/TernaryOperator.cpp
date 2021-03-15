#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
  int nota = 50;
  string S;

  (nota == 50) ? cout << nota << " eh igual a 50;" << endl : cout << nota << " eh diferente de 50;" << endl;
  (nota != 50) ? nota = 70 : nota = 10;

  cout << nota << endl;

  S = (nota >= 0) ? "Maior ou igual que 0." : "Menor que 0.";

  cout << S << endl;

  return 0;
}
