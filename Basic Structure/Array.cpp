#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
  int a[] = {1, 2, 3, 4, 5};
  char c[] = {'a', 'b', 'c', 'd', 'e'};
  string s = "abcde";
  string l[] = {"ab", "cd", "e"};

  cout << a[0] << endl;
  a[0] = 6;
  cout << a[0] << endl;
  cout << a[5] << endl; // Retorna valor 0.

  for (int i = 0; i < 5; i++)
    cout << c[i] << endl;

  cout << s << endl;

  return 0;
}