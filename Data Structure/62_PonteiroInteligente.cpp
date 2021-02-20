#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Computador {
  public:
    int memoriaRam;
    string processador;
};

int main() {
  // MODELO INTELIGENTE
  
  /*
  Ponteiros Inteligentes - É garantido que o objeto referenciado
  não utilizado seja apagado da memória, portanto, não é necessário
  o uso do delete;
  */
  
  auto num {10};
  // Ponteiro único para determinado valor, logo, não pode
  // ter um ponteiro apontando para outro ponteiro unique;
  unique_ptr<int> ptr (new int(10));
  unique_ptr<int> pnum (&num);
  //unique_ptr<int> ppnum (pnum); // Erro

  cout << "Valor declarado em ptr.........: " << *ptr << endl;
  cout << "Endereco de memoria do inteiro.: " << ptr << endl;
  cout << "Endereco de memoria do ponteiro: " << &ptr << endl;

  cout << "Valor declarado em pnum.........: " << *pnum << endl;
  cout << "Endereco de memoria do inteiro.: " << pnum << endl;
  cout << "Endereco de memoria do ponteiro: " << &pnum << endl;

  // Ponteiro compartilhado, pode apontar para outros ponteiros;
  shared_ptr<int> ptr2 (new int(20));
  shared_ptr<int> pnum2 (&num);
  shared_ptr<int> ppnum2 (pnum2); // OK

  // Modelo tradicional
  string *str (new string("Teste"));
  cout << *str << " - Tamanho: " << str->size() << endl;

  delete str;

  unique_ptr<string> pstr (new string("Teste"));
  cout << *pstr << " - Tamanho: " << pstr->size() << endl;

  // Modelo tradicional
  Computador *pc1 = new Computador();
  pc1->memoriaRam = 16;
  cout << pc1->memoriaRam << endl;

  delete pc1;

  // Modelo inteligente
  unique_ptr<Computador> pc2 (new Computador);
  pc2->memoriaRam = 24;
  cout << pc2->memoriaRam << endl;

  return 0;
}
