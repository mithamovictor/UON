#include <stdio.h>

void main() {
    int fact, mult;

    mult = 1;

    printf("Enter number ");
    scanf("%d", &fact );

    for ( fact; fact >= 0; fact-- ) {
        mult = mult * fact;
    }

    printf("%d", mult );
}