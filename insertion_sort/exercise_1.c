#include <stdio.h>

int main() {
  int A[] = {31, 41, 59, 26, 41, 58};
  int j = 0;

  for (int i = 1; i <= 5; i++) {
    int key = A[i];
    j = i - 1;
    while (A[j] > key && j >= 0) {
      A[j + 1] = A[j];
      j = j - 1;
    }
    A[j + 1] = key;
  }

  // print all elements
  for (int i = 0; i <= 5; i++) {
    printf("%d\n", A[i]);
  }
  return 0;
}
