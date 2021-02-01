#include <iostream>

using namespace std;

void somar(int *ptr, int num = 1);
void zerarArray(float *a);

int main() {
  int num = 0;
  somar(&num);
  cout << num << endl;
  
  float vetor[5];
  zerarArray(vetor);

  for (int i = 0; i < 5; i++) {
    cout << vetor[i] << " ";
  }
  cout << endl;
  
  return 0;
}

void somar(int *ptr, int num) {
  *ptr += num;
}

void zerarArray(float *a) {
  for (int i = 0; i < sizeof(a); i++) {
    a[i] = 0;
  }
}
