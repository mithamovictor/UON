#include <stdio.h>

int main() {
	
    // Declare the variables n and i
	int n, i;
	
	// Prompt to enter number of values to store in array
	printf("Enter number of values to be stored\n");
	scanf("%d", &n);
	printf("\n\n");
	
	// Declare the array
	char arr[n];
	
	// Check if the value of n is greater than 0
	if (n>0) {
//		for (i = 0; i < n; i++ ) {
//			printf("Enter value %d\n", i+1 );
//			scanf("%c", &A[i]);
//			printf("\n\nThe character stored at position %d is %c\n\n", i+1, A[i]);		
//		}
		i = 0;
		
		while ( i < n ) {
			printf("Enter value %d\n", i+1 );
			
			scanf("%c", &arr[i]);
			
			printf("\n\nThe character stored at position %d is %c\n\n", i+1, arr[i]);
				
			i++;
		}
	} else {
		printf("Invalid number of values");
	}
	
	return 0;
}
