#include <iostream>

using namespace std;

int main() {
  int i;
  char c, str[50];

  // Leitura de arquivos
  cin.get(c);
  cin.getline(str, 50);

  // Entrada e saída de dados padrão
  cin >> i >> c >> str;
  cout << i << c << str << endl;

  return 0;
}
