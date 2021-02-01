#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  short int num = 15;
  cout << "Valor de num em decimal: " << num << endl;
  cout << "Valor de num em hexadecimal: " << hex << num << endl;
  cout << "Valor de num em octal: " << oct << num << endl;
  cout << "Valor de num em decimal (de novo): " << dec << num << endl;
  cout << "Valor de num em hexadecimal (setbase): " << setbase(16) << num << endl;
  cout << "Valor de num em octal (setbase): " << setbase(8) << num << endl;
  cout << "Valor de num em decimal (setbase): " << setbase(10) << num << endl;
  float pi = M_PI;
  cout.precision(3); // Proximos cout imprimem números flutuantes com 3 - 1 casas decimais;
  cout << "Valor de PI com tres casas: " << pi << endl;
  cout.precision(-1); // Para voltar ao valor padrão;
  cout << "Valor de PI: " << pi << endl;
  cout << "Valor de PI em notacao cientifica: " << scientific << pi << endl; // Agora com notação científica;
  cout << "Valor de num bem longe...: " << setw(10) << num << endl;
  cout << "Muitos zeros: " << setw(10) << setfill('0') << '0' << endl;

  return 0;
}