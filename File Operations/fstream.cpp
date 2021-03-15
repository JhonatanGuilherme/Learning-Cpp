#include <iostream>
#include <fstream>
#include <locale>
#include <string>

using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");
  // fstream - Entrada ou Saída;

  fstream arquivoES;
  char option = 's';
  string nome;

  arquivoES.open("arquivoTeste.txt", ios::out); // Modo de escrita;

  // Modo de escrita, sem sobrescrever dados anteriores;
  //arquivoES.open("arquivoTeste.txt", ios::out | ios::app);

  while (toupper(option) == 'S') {
    cout << "Digite um nome: ";
    cin >> nome;
    arquivoES << nome << "\n";
    cout << "\nDigitar um novo nome? [s/n] ";
    cin >> option;
    system("cls");
  }

  arquivoES.close();

  string linha;

  arquivoES.open("arquivoTeste.txt", ios::in); // Modo de saída;

  cout << "Nomes digitados" << endl;

  if (arquivoES.is_open()) {
    while (getline(arquivoES, linha))
      cout << linha << endl;
    arquivoES.close();
  } else
    cout << "Não foi possível abrir o arquivo." << endl;

  return 0;
}
