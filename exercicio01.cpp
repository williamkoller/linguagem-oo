#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y;
  float result;

  printf("\nDigite um valor: ");
  scanf("%d", &x);

  printf("\nDigite outro valor: ");
  scanf("%d", &y);

  result = x * y;

  printf("\nResultado eh: %2.0f", result);

  return 0;
}
