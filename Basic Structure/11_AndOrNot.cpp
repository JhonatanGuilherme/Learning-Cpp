#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int A = 0, B = 5;

  if (A == 0 and B == 2)
    cout << "A == 0 and B == 2" << endl;
  else if (not A == 2 and B == 5)
    cout << "A != 2 and B == 5" << endl;
  else if (not A != 0 or B != -5)
    cout << "A == 2 or B != -5" << endl;

  cout << A << endl;
  cout << not A << endl;

  return 0;
}