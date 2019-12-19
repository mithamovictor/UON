#include <stdio.h>

void main() {
    
    int arr[100], max, n, i, loc = 1;
    
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    
    printf("Enter %d integers\n", n);
    
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    max = arr[0];
    
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
        max  = arr[i];
        loc = i+1;
        }
    }
    
    printf("Maximum element is present at location %d and it's value is %d.\n", loc, max);
}