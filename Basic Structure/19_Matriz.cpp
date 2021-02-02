#include <iostream>
using std::cout;
using std::endl;

int main() {
  int a[3][2];
  int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int c[3][2] = {{1, 2}, {3, 4}, {5, 6}};

  cout << a[0][0] << endl;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
