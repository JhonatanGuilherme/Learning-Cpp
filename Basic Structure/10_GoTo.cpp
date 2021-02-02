#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cctype>
#include <cstdlib>

int main() {
  int nota1, nota2;
  char opc;
  
  inicio:
  system("cls");
  
  cout << "Digite nota 1: ";
  cin >> nota1;
  cout << "Digite nota 2: ";
  cin >> nota2;

  if (nota1 + nota2 >= 70)
    cout << "Aprovado." << endl;
  else
    cout << "Reprovado." << endl;

  cout << "Quer digitar mais notas? (s/n)";
  cin >> opc;

  if (tolower(opc) == 's')
    goto inicio;

  return 0;
}