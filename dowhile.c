#include <stdio.h>

void main() {
    int sum, num;
    num = 0;

    do {
        printf("%d\n", num);
        sum += num;

        num++;
    } while (num <= 20 );

    printf( "The sum of the numbers is %d\n", sum );
}