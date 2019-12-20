#include <stdio.h>

void main() {
  int num, k, n, j;

  printf("Enter a range ");
  scanf("%d", &n);

  // printf("\nEnter a second range ");
  // scanf("%d", &j);
  printf("\n\n");

  for ( num=1; num<=n; num++ ) {
    for (k=1; k<=n; k++) {
      printf("%d * %d = %d\n", num, k, k*num );
    }
    // printf("\n=============\n\n");
    printf("\n*************\n\n");
  }
}