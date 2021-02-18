#include <iostream>

using std::cout;
using std::endl;

int main() {
  enum armas {escopeta = 2, fuzil = 50, revolver = 20, rifle = 10};

  armas armaSel = revolver;
  cout << armaSel << endl;

  return 0;
}
