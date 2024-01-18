#include <stdio.h>

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  int square = number * number;
  printf("The square of %d is %d\n", number, square);
  return 0;
}
