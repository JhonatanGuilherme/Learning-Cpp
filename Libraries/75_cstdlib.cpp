#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(void) {
  int a = 5, b = -5;

  cout << abs(a) << " && " << abs(b) << endl;

  int numerator = 10, denominator = 3;
  div_t result = div(numerator, denominator);

  cout << numerator << " / " << denominator << " = " << result.quot << endl;
  cout << "division remainder = " << result.rem << endl;

  //labs(); - abs() to long integer number
  //llabs(); - abs() to long long integer number (C++11)
  //ldiv(); - div() to long integer
  //lldiv(); - div() to long long integer (C++11)

  vector<int> vec {9, 6, 3, 8, 5, 2, 7, 4, 1, 0};
  // size_t type is used to size collections
  size_t vecSize = size(vec); // or vec.size()

  cout << vecSize << endl;

  return 0;
}
