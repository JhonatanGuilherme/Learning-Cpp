#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

// argc - Armazena quantidade de argumentos passados (Padrão é 1)
// argv - Ponteiro para matriz de char;
/*
Se executado por cmd e passado um valor em seguida, o valor será usado como argumento para main,
como string para posição 1 de argv.
*/
int main(int argc, char *argv[]) {

  // cout << argc << endl; // Retorna o endereço do arquivo.
  if (argc > 1) {
    if (!strcmp(argv[1], "sol"))
      cout << "Vou ao clube." << endl;
    else if (!strcmp(argv[1], "nublado"))
      cout << "Vou ao cinema." << endl;
    else
      cout << "Vou ficar em casa." << endl;
  }

  system("pause");
  return 0;
}