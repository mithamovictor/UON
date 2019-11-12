#include <stdio.h>

int fees(int num);

void main() {
  int num;

  printf("Enter number of students ");
  scanf("%d", &num);

  fees(num);
}

int fees(int num) {

  int reg, paid, i, n, bal;
  char name[n];
  bal = 0;
  char cont;

  i = 0;


  while (i<num) {
    printf("Enter the student name ");
    scanf("%s", &name[i]);

    printf("\nEnter the student Reg. No. ");
    scanf("%d", &reg);

    printf("\nEnter the fee paid in by the student ");
    scanf("%d", &paid);

    if ( paid < 150000 ) {
      bal = ( 150000 - paid );
    }

    printf("\nThe fees paid by %s of Reg. No. %d is %d with a balance of %d \n", name, reg, paid, bal);

    printf("Enter y to continue and n to stop. ");
    scanf("%s", &cont);

    i++;

    if ( cont == 'n' ) {
      return 0;
    }
  }
}