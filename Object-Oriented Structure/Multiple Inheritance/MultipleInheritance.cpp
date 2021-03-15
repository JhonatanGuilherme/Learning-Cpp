#include <iostream>

#include "ClassesBase.h"

using namespace std;

int main() {
  ClasseBase1 *base1 = new ClasseBase1();
  ClasseBase2 *base2 = new ClasseBase2();
  CFB *baseGeral = new CFB();

  base1->imprimirBase();
  base2->imprimirBase2();

  // Recebe os dois métodos de ambas as classes;
  baseGeral->imprimirBase();
  baseGeral->imprimirBase2();

  return 0;
}
