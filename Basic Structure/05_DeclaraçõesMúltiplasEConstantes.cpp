#include <iostream>

using namespace std;

#define A 100 // Definição de constantes globais;
#define pi 3.1415
# define printf cout << "printf esta de volta" << endl;

int main() {
  cout << A << endl;
  cout << sizeof(A) << endl;

  static int P = 10;
  int B = 50, C = 30; // Padrão para declaração de int - 4 bytes;
  short int D = 20; // 2bytes, valores inteiros;
  long int E = 10; // 4 bytes, valores inteiros;
  unsigned short int F = 0; // 2 bytes, valores positivos;
  unsigned long int G = 10; // 4 bytes, valores positivos;

  cout << sizeof(D) << endl;
  cout << sizeof(E) << endl;
  cout << F << endl;
  printf

  return 0;
}