#include <stdio.h> // Para função fgets;
#include <stdlib.h> // Para função malloc;
#include <iostream>
#include <locale>

using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8"); // Funcionou perfeitamente;
  char *nome;

  nome = (char *) malloc(sizeof(char));

  //cin >> nome; // Retorna somente a primeira palavra antes do Enter ou Espaço;
  //fgets(nome, sizeof(nome), stdin);
  cin.get(nome, sizeof(nome));
  cout << nome;

  cout << flush; // Esvaziando o buffer de saída;

  delete nome;

  return 0;
}
