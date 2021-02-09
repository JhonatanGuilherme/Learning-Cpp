#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");
  // ifstream - Entrada;

  ofstream arquivoS;

  arquivoS.open("arquivoTeste.txt", ios::app);

  arquivoS << "Aprendendo C++\n";

  arquivoS.close();

  ifstream arquivoE;
  string linha;
  
  arquivoE.open("arquivoTeste.txt");

  if (arquivoE.is_open()) { // Condição para confirmar que o arquivo foi lido;
    while (getline(arquivoE, linha))
      cout << linha << endl;
    arquivoE.close();
  } else
    cout << "Não foi possível abrir o arquivo." << endl;

  return 0;
}
