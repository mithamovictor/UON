#include <stdio.h>

void main() {
  /*
  * This function is used to input grades per unit and output the performance of the student.
  * At the end it outputs the average performance
  */
  // Declare variables:
  float total, average;
  int y, n;
  char g;

  printf("Enter number of units done ");
  scanf("%d", &n);

  float marks[n];
  
  printf("\nEnter your marks\n");
  
  // Start looping through each marks
  for ( y=1; y<=n; y++ ) {

    // Start processing the marks
    printf("Unit %d\n", y);
    scanf("%f", &marks[y]);

    // Check if marks are between 0 and 100
    if ( marks[y] >= 0 && marks[y] <= 100 ) {

      // Check grade input and display performance
      if ( marks[y] >= 70 ) {
        printf("Your Grade is A and you have passed\n\n" );
      } else if ( marks[y] >=60 && marks[y] < 70 ) {
        printf("Your Grade is B and you are above average\n\n" );
      } else if ( marks[y] >=50 && marks[y] < 60 ) {
        printf("Your Grade is C and you are average\n\n" );
      } else if ( marks[y] >=40 && marks[y] < 50 ) {
        printf("Your Grade is D and you are average\n\n" );
      } else {
        printf("Your Grade is E and you have failed\n\n" );
      }
    } else {

      // Error message for invalid grades
      printf("Marks are not valid!\n\n");
    }

    // Calculate the total
    total += marks[y];
  }

  // Get the average marks
  average = (total/n);

  // Check if average marks are between 0 and 100
  if ( average >= 0 && average <= 100 ) {
    // Check average and allocate grade
    if ( average >= 70 ) {
      g = 'A';
    } else if ( average >=60 && average < 70 ) {
      g = 'B';
    } else if ( average >=50 && average < 60 ) {
      g = 'C';
    } else if ( average >=40 && average < 50 ) {
      g = 'D';
    } else {
      g = 'E';
    }
    
    // Output the average marks
    printf ( "Total average marks are %.2f with a grade %c\n", average, g );
  } else {

    // Error message for invalid marks input
    printf("There were marks you entered that were not valid!\n\n");
  }
}