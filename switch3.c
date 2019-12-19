#include <stdio.h>

void main() {
  int marks, num, a, b, tot;
  char name[10];

  printf("Enter a number between 1 and 9\n");
  scanf("%d", &num);

  switch (num)
  {
    case 1 /* constant-expression */:
      /* code */

      // Allow input of marks
      printf( "Enter marks " );
      scanf( "%d", &marks );

      // If marks are more than 80 give an A
      if ( marks > 80 ) {
        printf("You have an A\n");
      }

      // If marks are more than 70 give a B
      else if ( marks > 70 ) {
        printf("You have a B\n");
      }

      // If marks are more than 60 give a C
      else if ( marks > 60 ) {
        printf("You have a C\n");
      }

      // If marks are more than 50 give a D
      else if ( marks > 50 ) {
        printf("You have a D\n");
      }

      // If marks are more than 40 give an E
      else if ( marks > 40 ) {
        printf("You have an E\n");
      }

      // If marks are less than 40 give an F
      else {
        printf("You have an F\n");
      }
      break;
      
    case 2 /* constant-expression */:
      /* code */
      printf("Enter your name ");
      scanf("%s", name);
      printf("\n%s you are genius!\n", name);
      break;

    case 3 /* constant-expression */:
      /* code */
      printf("\nEnter first Value ");
      scanf("%d", &a);
      printf("\nEnter second value ");
      scanf("%d", &b);

      tot = a + b;

      printf("\nThe sum of %d plus %d is %d\n", a, b, tot);
      break;

    default:
      printf("Invalid Number\n");
      break;
  }
}