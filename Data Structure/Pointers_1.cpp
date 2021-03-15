#include <iostream>

using namespace std;

int main() {
  unsigned short int num = 0, *ptr = &num;
  cout << "num = " << num << endl;
  cout << "ptr = " << ptr << endl; // Endereço de memória de num;
  cout << "*ptr = " << *ptr << endl; // Valor de num;
  cout << "&ptr = " << &ptr << endl; // Endereço de memória de ptr;

  unsigned short int arr[5], *ptrArr = &arr[0];
  cout << ptrArr << endl; // Endereço de memória de arr[0];
  *(ptrArr++);
  cout << ptrArr << endl; // Endereço de memória de arr[1];

  cout << arr[0] << endl;
  *(--ptrArr) = 5;
  cout << arr[0] << endl;
  *(++ptrArr) = 10;
  cout << arr[1] << endl;

  delete ptr, ptrArr;

  return 0;
}
