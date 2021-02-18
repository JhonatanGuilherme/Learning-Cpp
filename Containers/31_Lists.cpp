#include <iostream>
#include <list>

using namespace std;

int main() {
  /*
  Container List - é um container sequencial;
  A list guarda elementos em diferentes locais de memória,
  internamente são unidos duplamente por nós;
  Não são acessados por índices, portanto, é recomendado
  utilizar um Iterator para percorrer a List;
  Inserção e exclusão de elementos são mais fáceis.
  */

  list<int> numeros;
  list<int> a(5); // Lista com 5 elementos;
  list<int> cinquentas(5, 50); // Lista com 5 elementos '50';

  cout << "Valores da List: ";
  for (int i = 0; i < 10; i++) {
    // É possível adicionar tanto por trás (push_back), quanto
    // pela frente (push_front) da coleção;
    numeros.push_back(i); // Adiciona valores pelo final da List;
    cout << numeros.back() << " ";
  }
  cout << endl;

  int tam = numeros.size(); // Tamanho da List;
  cout << "Tamanho da List: " << tam << endl;
  
  list<int>::iterator itBegin = numeros.begin(), itEnd = numeros.end(); // Criação de Iterators;
  cout << "Primeiro elemento: " << *itBegin << endl;
  itEnd --;
  cout << "Ultimo elemento: " << *itEnd << endl;
  itBegin ++;
  cout << "Segundo elemento: " << *itBegin << endl;
  itEnd --;
  cout << "Penultimo elemento: " << *itEnd << endl;

  itBegin --; itEnd ++;
  cout << "Valores da List pelo Iterator: ";
  
  for (int i = 0; i < tam; i++)
    cout << *itBegin++ << " ";
  cout << endl;
  itBegin++;
  
  advance(itBegin, 3); // Avança 3 posições;
  cout << *itBegin << endl;
  itBegin = prev(itBegin, 3); // Retorna um Iterator recuando 3 posições;
  cout << *itBegin << endl;
  itBegin = next(itBegin, 3); // Retorna um Iterator avançando 3 posições novamente;
  cout << *itBegin << endl;

  itBegin = numeros.begin();
  cout << *itBegin << endl;
  numeros.insert(itBegin, -1);
  tam ++;
  itBegin --;
  
  cout << "Valores da List pelo Iterator: ";
  for (int i = 0; i < tam; i++)
    cout << *itBegin++ << " ";
  cout << endl;

  //numeros.erase(); // Limpar a List;
  //numeros.sort(); // Ordenar os valores;
  numeros.reverse(); // Inverter a ordem dos valores;
  
  cout << "Valores da List invertidos: ";
  for (int i = 0; i < tam; i++) {
    cout << numeros.front() << " ";
    numeros.pop_front();
  }
  cout << endl;

  // Adicionar elementos de um STL container, dentro de outro;
  // copy(numeros.begin(), numeros.end(), inserter(it, it2));

  return 0;
}
