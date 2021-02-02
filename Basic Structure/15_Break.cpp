#include <iostream>
using std::cout;
using std::endl;

int main() {
  int A = 0;
  
  while(1) {
    cout << A++ << endl;
    if (A == 5)
      break;
  }

  return 0;
}