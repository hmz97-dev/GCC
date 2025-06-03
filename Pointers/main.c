#include <stdio.h>

int main() {
  int n = 10;

  /* your code goes here */
  int *pointer_to_n = &n; // Point to n
  (*pointer_to_n)++;      // Increment n through the pointer

  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");
  return 0;
}

