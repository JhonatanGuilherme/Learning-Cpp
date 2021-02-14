#include <iostream>
#include <vector> // Biblioteca para Vector

using namespace std;

int main() {
  vector<int> num(5, 10); // Vector com 5 elementos com '10';
  short int vectorSize = num.size();
  cout << num.size() << endl;
  cout << num[0] << endl;
  num[0] = 1;
  cout << num[0] << endl;
  for (int i = 0; i < 5; i++) {
    num.push_back(i);
  }
  cout << num.size() << endl;
  cout << num[0] << endl;
  num.insert(num.begin() + 2, 50);
  num.erase(num.end() - 3);
  vectorSize = num.size();
  cout << "Primeiro valor...: " << num.front() << endl;
  cout << "Ultimo valor.....: " << num.back() << endl;
  cout << "Valor do meio....: " << num.at(vectorSize / 2) << endl;
  cout << "Tamanho do Vector: " << vectorSize << endl;
  cout << "Valores do Vector: ";
  for (int i = 0; i < vectorSize; i++) {
    cout << num[i] << " ";
  }
  cout << endl;
  while(!num.empty())
    num.pop_back();
  
  num.clear(); // Limpar o Vector completo;

  return 0;
}