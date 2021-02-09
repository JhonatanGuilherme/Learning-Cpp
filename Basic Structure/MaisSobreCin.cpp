#include <iostream>

using namespace std;

int main() {
  int dado;

  // Repete enquanto o usuário não digitar fim de arquivo(Ctrl+Z ou Ctrl+D)
  while(cin >> dado)

  cin.eof(); // Devolve 1 (verdadeiro) se chegou ao fim do arquivo

  char c;
  c = cin.get();
  char *nome;
  //cin >> nome; // lê até o 1º espaço em branco apenas
  cin.get(nome, sizeof(nome)); // lê até o 99º caractere ou <ENTER>
  cout << nome;
  cin.get(nome, 100, 'x');
  
  /* get sempre insere um NULL no final da seqüência lida.
    O delimitador não é retirado da entrada.
    Isto faz com que a próxima leitura devova este caractere
    (no caso, uma linha será devolvida.
  */

  cin.getline(nome, 10); // Remove o delimitador do buffer automaticamente;

  cin.putback(c); // Recoloca o último caractere lido de volta no buffer;

  if (cin.bad()) // Se houve falha na leitura;
  if (cin.fail()) // Dado digitado incompatível com o dado esperado;

  /*
  ios::eofbit
  ios::badbit
  ios::failbit
  ios::goodbit
  cin.clear(); // Reseta o estado de stream, ativando "goodbit";
  */

  return 0;
}
