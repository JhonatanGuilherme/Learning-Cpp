#include <iostream>

using namespace std;

// Extern - significa que a variável passada vem de outro
// arquivo cpp;
extern auto num;

extern void imprimirNum() {
  cout << num << endl;
}
