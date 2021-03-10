#include <iostream>
#include <functional>

using namespace std;

int sum(int a, int b);

struct Foo {
  int number;
  int duplicate(void);
};

int main(void) {
  auto a = 5, b = 8;
  auto result = bind(sum, a, b);

  cout << result() << endl;

  auto c = cref(a);
  auto &d = a;
  a++;

  cout << c << endl;
  cout << d << endl;

  Foo object {5};
  // create a copy of duplicate function
  auto duplicateInMain = mem_fn(&Foo::duplicate);
  
  cout << object.number << endl;

  cout << duplicateInMain(object) << endl;
  
  return 0;
}

int sum(int a, int b) {
  return a + b;
}

int Foo::duplicate(void) {
  return number * 2;
}
