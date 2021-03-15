#include <algorithm> // for_each
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  /*
  // for tradicional
  for (int i = 0; i < size(vec); i++)
    cout << i << endl;
  
  // for através de iterator
  for (auto it = vec.begin(); it != vec.end(); it++)
    cout << *it << endl;

  // for por referência
  for (auto &i : vec)
    cout << i << endl;
  */
  // for each
  for_each (vec.begin(), vec.end(), [](int num){
    cout << num << endl;
  });

  return 0;
}
