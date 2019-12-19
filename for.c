#include <stdio.h>

void main() {
    int sum, num;
    num = 0;

    for (num; num <= 20; num++ ) {

        printf("%d\n", num);
        sum+=num;
    }

    printf( "The sum of the numbers is %d\n", sum );
}