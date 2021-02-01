#include <iostream>
#include <cstdio> // Mesmo que stdio.h em C;

using namespace std;

int main() {
  int a = 0;
  printf("%d\n", a);
  float b = 1.8;
  printf("%.2f\n", b);
  char c[] = "string";
  scanf("%s", c);
  printf("%s\n", c);
  scanf("%d", &a);
  printf("%d\n", a);
  printf("%05d\n", 5);

  //scanf();

  return 0;
}
