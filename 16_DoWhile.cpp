#include <iostream>
using std::cout;
using std::endl;

int main() {
  int A = 0;
  do {
    cout << ++A << endl;
  } while (A < 5);

  return 0;
}