#include <stdio.h>

typedef struct {
    char string[50];
} List;

void main() {

    int n, i=0, num, pos, x;

    printf("Please enter the number of values to be stored\n");
    scanf("%d", &n);

    List list[n];

    // Create a new list and add items to it
    do {
        // printf("\n%d", i);
        printf("\nPlease enter the value for position %d\n", i+1);
        scanf("%s", list[i].string);
        i++;
    } while (i < n);

    // Action prompts after list is created;
    printf("\n\nTo search through the list enter 1\n");
    printf("To insert item to the list enter 2\n");
    printf("To delete item from the list enter 3\n\n");
    scanf("%d", &num);

    if (num > 0) {
        switch (num) {
            case 1:
                // Search for element
                printf("\nEnter the position of the element to search for\n");
                scanf("%d", &pos);
                
                // Loop through the items and display the element at the position provided
                if (pos > n || pos < 1) { 
                    printf("\nInvalid position!\n");
                } else {
                    for(int j=0; j<n; j++) {
                        if ( j == (pos-1) ) {
                            printf("\nThe item is %s\n", list[j].string);
                        }
                    }
                }
                break;
            case 2:
            
                // if(n>0) {
                //     n+1;
                //     printf("\nEnter the position to insert element:: ");
                //     scanf("%d", &x);

                //     printf("\nSave the element at position %d\n", x);
                //     for (int j=(n+1); j=>x; j--) {
                //         list[j].string = list[j+1].string;
                //     }
                // }
                break;

            case 3:
                printf("\nEnter the position to delete element");
                break;

            default: 
                printf("\nInvalid action!\n");
                break;
        }
    } else {
        printf("Program terminated!\n");
    }
}