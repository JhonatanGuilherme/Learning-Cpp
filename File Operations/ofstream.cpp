#include <iostream>
#include <fstream> // Biblioteca para trabalhar com arquivos;

using namespace std;

int main() {
  // ofstream - Saída;

  ofstream arquivo;

  arquivo.open("arquivoTeste.txt", ios::app); // Criação de arquivo;
  /*
    Passar ios::app como parâmetro, faz com que o cursor seja posicionado
    no final do arquivo, logo, não alterando, apenas adicionado.
  */

  arquivo << "Aprendendo C++\n"; // Armazenar "Teste" no arquivoTeste.txt;

  arquivo.close(); // Fechar o arquivo utilizado;

  return 0;
}
