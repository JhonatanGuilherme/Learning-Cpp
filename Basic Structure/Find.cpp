#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
  int elemento = 5, array[] {1, 2, 3, 4, 5};
  auto ptrArr = find(array, array + size(array), elemento); // pointer

  cout << "Elemento " << elemento << (*ptrArr <= size(array) ?
  " encontrado." : " nao encontrado.") << endl;

  vector<int> vetor {1, 2, 3, 4, 5};
  auto itVet = find(vetor.begin(), vetor.end(), elemento); // iterator

  cout << "Elemento " << elemento << (vetor.end() != itVet ?
  " encontrado." : " nao encontrado.") << endl;

  map<char, int> mapa {{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}};
  auto itMap = mapa.find('e'); // iterator

  cout << "Elemento " << elemento << (mapa.end() != itMap ?
  " encontrado." : " nao encontrado.") << endl;

  string str {"Esta eh uma string"};
  auto auxStr = str.find('f'); // size_t

  cout << "Elemento " << 'f' << (auxStr != str.npos ?
  " encontrado." : " nao encontrado.") << endl;

  return 0;
}
