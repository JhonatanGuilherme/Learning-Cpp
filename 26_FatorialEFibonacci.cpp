#include <iostream>

using std::cout;
using std::endl;

int fatorial(unsigned short int num);
void fibonacci(unsigned short int num);
int fatorialRecursiva(unsigned short int num);
int fibonacciRecursiva(unsigned short int num);

int main() {
  cout << fatorial(5) << endl;
  fibonacci(10);
  cout << fatorialRecursiva(5) << endl;
  cout << fibonacciRecursiva(20) << endl;

  return 0;
}

int fatorial(unsigned short int num) {
  unsigned short int cont = num;
  while (cont > 1)
    num *= --cont;
  return num;
}

void fibonacci(unsigned short int num) {
  unsigned short int aux = 0, cont = 1;
  while (aux <= num or cont <= num) {
    cout << aux << " ";
    aux += cont;
    cout << cont << " ";
    cont += aux;
  }
  cout << endl;
}

int fatorialRecursiva(unsigned short int num) {
  if (num == 1)
    return 1;
  return num * fatorialRecursiva(num - 1);
}

int fibonacciRecursiva(unsigned short int num) {
  static unsigned short int aux = 0, cont = 1;
  cout << aux << " ";
  aux += cont;
  cout << cont << " ";
  cont += aux;
  if (aux >= num or cont >= num)
    return aux;
  return fibonacciRecursiva(num);
}
