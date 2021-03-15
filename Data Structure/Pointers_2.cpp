#include <iostream>
#include <memory> // Biblioteca para Memória Dinâmica

using namespace std;

int main() {
  // MODELO TRADICIONAL

  // Criação de um array associado a um vetor;
  int *vet = new int[5]; // Necessário deletar após o uso;
  int vet2[] {1, 2, 3}; // Deletado automaticamente;

  *vet = 10; // Posição 0;
  *(vet + 1) = 20; // Posição 1;
  *(vet + 2) = 30; // Posição 2;

  cout << *vet << endl;

  cout << *vet2 << endl;
  *vet2 = 2;
  cout << *vet2 << endl;

  delete[] vet; // Liberar memória do array criado por vet;

  int num {10}, *pnum = &num;
  cout << num << endl;
  cout << *pnum << endl;

  delete pnum; // Limpando memória do ponteiro;

  cout << num << endl;

  return 0;
}
