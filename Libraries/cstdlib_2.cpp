#include <cstdlib>
#include <iostream>

using namespace std;

void end(void);
int sort(const void *a, const void *b);

int main(void) {
  // getenv() - get environments variables and returns in a pointer
  const char *ptrPath = getenv("PATH");

  cout << ptrPath << endl;

  int array[] {9, 1, 8, 7, 3, 6, 0, 5, 4};
  int arraySize = size(array);

  // qsort() - with array, arraySize, type bytes, function to sort
  qsort(array, arraySize, sizeof(int), sort);

  for (int i = 0; i < arraySize; i++)
    cout << array[i] << " ";
  cout << endl;

  int element = 7, *position = nullptr;

  // bsearch() - returns a void pointer with element position
  // :params: element adress, array, arraySize, type bytes and function to sort
  position = (int*) bsearch(&element, array, arraySize, sizeof(int), sort);

  cout << *position << endl;

  // Before the termination of program (return 0 or exit()), run a function
  atexit(end);

  for (int i = 0; i < 5; i++) {
    if (i < 3)
      cout << i << endl;
    else {
      exit(EXIT_SUCCESS); // exit() - cause normal process termination
      //quick_exit(EXIT_SUCCESS); // quick_exit() - exits a program quickly, running minimal cleanup
      //_Exit(EXIT_SUCCESS); // _Exit() - cause normal process termination (without run atexit function)
      cout << i << endl;
    }
  }

  return 0;
}

void end(void) {
  cout << "End function says...: End of program" << endl;
}

int sort(const void *a, const void *b) {
  return (*(int*)a - *(int*)b);
}
