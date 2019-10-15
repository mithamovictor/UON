#include <stdio.h>

void main() 
{
  int counter;
  int sum;

  while (counter <= 20 ) 
  {
    
    printf("%d\n", counter);
    sum += counter;

    counter++;
  }

  printf( "The sum of the numbers is %d\n", sum );
}