#include <stdio.h>

void main() {
  int num;

  printf("Enter a number between 1 and 9\n");
  scanf("%d", &num);

  switch (num)
  {
    case 1 /* constant-expression */:
      /* code */
      printf("The number is one\n");
      break;
      
    case 2 /* constant-expression */:
      /* code */
      printf("The number is two\n");
      break;

    case 3 /* constant-expression */:
      /* code */
      printf("The number is three\n");
      break;
      
    case 4 /* constant-expression */:
      /* code */
      printf("The number is four\n");
      break;
    
    case 5 /* constant-expression */:
      /* code */
      printf("The number is five\n");
      break;
    
    case 6 /* constant-expression */:
      /* code */
      printf("The number is six\n");
      break;
    
    case 7 /* constant-expression */:
      /* code */
      printf("The number is seven\n");
      break;
    
    case 8 /* constant-expression */:
      /* code */
      printf("The number is eight\n");
      break;
    
    case 9 /* constant-expression */:
      /* code */
      printf("The number is nine\n");
      break;

    default:
      printf("Invalid Number\n");
      break;
  }
}