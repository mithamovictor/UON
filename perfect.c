#include <stdio.h>

void main() {

    int start, end, i, j, sum;

    printf("Enter the range start ");
    scanf("%d", &start);
    printf("Enter the range end ");
    scanf("%d", &end);

    for ( i=start; i<=end; i++ ) {
        sum=0;

        while ( j<=i ) {

            if ((i%j) == 0 ) {
                sum += j;
            }

            j++;
        }

        if ( sum == i ) {
            printf("%d\n\n", i );
        }
    }
}