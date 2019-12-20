#include <stdio.h>

void main() {
  int num, k;

  printf("Enter a number ");
  scanf("%d", &k);

  printf("\n\n");
  
  for ( num=1; num<=9; num++ ) {
    printf("%d * %d = %d\n", k, num, k*num );
  }

  printf("\n\n");
  
}