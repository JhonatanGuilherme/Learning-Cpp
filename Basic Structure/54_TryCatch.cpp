#include <iostream>
#include <locale>
#include <stdexcept>
#include <vector>

using namespace std;

double divide(double, double);

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");
  vector<int> num(5);

  // Tratamento de erro com Try Catch através de uma exceção;
  /*try {
    num.at(6) = 10;
    cout << num[0] << endl;
  } catch (exception &e) {
    cout << "Ocorreu um erro. Tente novamente." << endl;
    cout << e.what() << endl;
  }*/

  // Tratamento de erro com Try Catch através de um throw;
  try {
    cout << divide(5, 0) << endl;
  } catch (const char* e) {
    cout << e << endl;
  }

  return 0;
}

double divide(double n1, double n2) {
  if (n2 == 0)
    throw "Erro de divisao por zero.";
  return n1 / n2;
}
