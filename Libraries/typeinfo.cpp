#include <iostream>
#include <typeinfo>

using namespace std;

struct Foo { };

int main(void) {
  auto number {'a'};
  auto numberType = typeid(number).name();
  auto structType = typeid(Foo).name();

  // Returns i to int, f to float, d to double, c to char, etc.
  cout << "Number type: " << numberType << endl;
  // Returns number of characters and name of structure
  cout << "Number type: " << structType << endl;

  cout << (typeid(int).before(typeid(char)) ?
  "Int type before char type" : "Char type before int type") << endl;

  return 0;
}
