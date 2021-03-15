#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
  /*
  Container Pair - é utilizado para armazenar dois elementos
  por iteração, ou seja, a cada índice de um conjunto de pair,
  existem dois elementos de um mesmo ou dois tipos distintos;
  */
  
  pair<int, string> par[5]; // Coleção pair com 5 posições
  pair<int, string> par2 (5, "a"); // Coleção pair única

  // O primeiro elemento é acessado por posição.first
  par[0].first = 50;
  // O segundo elemento é acessado por posição.second
  par[0].second = "b";

  // make_pair torna possível passar dois valores juntos
  // para um pair;
  par[1] = make_pair(100, "c");
  par[2] = make_pair(150, "d");
  par[3] = make_pair(200, "e");
  par[4] = make_pair(250, "f");

  par2.first = 300;
  par2.second = "g";

  cout << par[0].first << " - " << par[0].second << endl;
  cout << par2.first << " - " << par2.second << endl;

  for (auto &i : par)
    cout << i.first << " - " << i.second << endl;

  pair <int, pair <int, double>> par3;

  par3 = make_pair(1, make_pair(2, 3.5));

  cout << par3.first << " - " << par3.second.first << " - " << par3.second.second << endl;

  return 0;
}
