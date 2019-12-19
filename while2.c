#include <stdio.h>

void main() {
  int marks[20];
  int i, sum, j, tot;
  int units[7];

  while ( i < 20 ) {

    printf("Enter marks for student %d \n", i);
    // scanf("%d", &marks[i]);

    while ( j < 7 ) {
      printf( "Enter marks for unit %d\n", j );
      scanf( "%d", &units[j] );

      tot += units[j];
      j++;
    }

    printf("The total for student %d is %d \n", i, tot );

    sum += marks[i];
    i++;
  }

  printf("The total marks are %d", sum );
  
}