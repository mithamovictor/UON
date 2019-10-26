#include <stdio.h>

void main() {
    int num, k;

    printf("Enter a number ");
    scanf("%d", &k);

    for ( num=1; num<=9; num++ ) {
        printf("%d * %d = %d\n", k, num, k*num );
    }
}