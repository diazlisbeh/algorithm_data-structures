#include <stdio.h>

int findIndex(int element, int arr[], int n) {
  for (int i = 0; i <= n; i++) {
    if (arr[i] == element) {
      return i;
    }
  }
  return -1;
}

int main() {

  int B[] = {31, 41, 59, 26, 41, 58};
  int indexOf = findIndex(26, B, 5);
  printf("%d\n", indexOf);

  return 0;
}
