#ifndef CLASSESBASE_H_INCLUDED
#define CLASSESBASE_H_INCLUDED

#include <iostream>

using namespace std;

class ClasseBase1 {
  public:
    void imprimirBase();
};

void ClasseBase1::imprimirBase() {
  cout << "Classe Base 1" << endl;
}

class ClasseBase2 {
  public:
    void imprimirBase2();
};

void ClasseBase2::imprimirBase2() {
  cout << "Classe Base 2" << endl;
}

class CFB:public ClasseBase1, public ClasseBase2 { // Múltipla herança;
  public:

};

#endif // CLASSESBASE_H_INCLUDED
