#include <stdio.h>

void main()
{
  // Declare the variable
  int marks;

  // Allow input of marks
  printf( "Enter marks " );
  scanf( "%d", &marks );

  // If marks are more than 80 give an A
  if ( marks > 80 ) {
    printf("You have an A");
  }

  // If marks are more than 70 give a B
  else if ( marks > 70 ) {
    printf("You have a B");
  }

  // If marks are more than 60 give a C
  else if ( marks > 60 ) {
    printf("You have a C");
  }

  // If marks are more than 50 give a D
  else if ( marks > 50 ) {
    printf("You have a D");
  }

  // If marks are more than 40 give an E
  else if ( marks > 40 ) {
    printf("You have an E");
  }

  // If marks are less than 40 give an F
  else {
    printf("You have an F");
  }

  // Terminate on a new line
  printf("\n");
}




