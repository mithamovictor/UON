#include <stdio.h>

void main() {
    int arr[20], i;

    for ( i = 0; i < 20; i++ ) {
        printf("Enter number at the %d position", i+1 );
        scanf("%d", &arr[i]);

        printf("%d\n", arr[]);
    }
}