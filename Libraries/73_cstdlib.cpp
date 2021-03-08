#include <cstdlib> // stdlib.h;
#include <ctime>
#include <iostream>

using namespace std;

int main(void) {
  char in[99];

  cin >> in;

  // Type convertion
  atof(in); // Convert string to double
  atoi(in); // Convert string to integer
  atol(in); // Convert string to long integer
  atoll(in); // Convert string to long long integer
  strtod(in, NULL); // Convert string to double
  strtof(in, NULL); // Convert string to float
  strtol(in, NULL, 10); // Convert string to long integer
  strtold(in, NULL); // Convert string to long double
  strtoll(in, NULL, 10); // Convert string to long long integer
  strtoul(in, NULL, 10); // Convert string to unsigned long integer
  strtoull(in, NULL, 10); // Convert string to unsigned long long integer

  // Generate random number
  srand(time(NULL)); // Change seed of rand
  for (int i = 0; i < 10; i++)
    cout << rand() % 20 << endl;
  
  // Dynamic Memory Allocation
  int *number;
  
  cout << "Pointer before malloc(): " << number << endl;
  // Returns a pointer type int - contains 4 bytes allocated in memory adress
  number = (int *)malloc(sizeof(int));
  cout << (number == NULL ? "Memory allocation falied!" : "Everything is cool...") << endl;
  cout << "Pointer after malloc(): " << number << endl;

  int size = 10;
  int *vector;

  // size (10) * sizeof int (4) = 40 bytes
  // Its used to reserve space for dynamic arrays - initializing everythong to NULL
  // Returns a pointer type int - contains size * sizeof(int) bytes allocated
  vector = (int*) calloc (size, sizeof(int)); // ten positions

  // free() function is the opposite of malloc() - de-allocates the memory
  free(number);
  free(vector);

  return 0;
}
