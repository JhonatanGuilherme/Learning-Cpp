#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x[] {1, 2, 3, 4, 5};
  vector<int> y {1, 2, 3, 4, 5};

  // For padrão C-type
  for (int i = 0; i < size(x); i++)
    cout << x[i] << endl;
  
  // For-Range-Declaration C++11
  // Obs: Não funciona com strings/const char*
  for (auto &i : x)
    cout << i << endl;

  for (auto &i : y)
    cout << i << endl;

  return 0;
}
