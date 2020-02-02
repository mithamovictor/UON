#include<stdio.h>

void del();
void insert();
void create();

void main() {
	int j;
	
	printf("\nSelect action:\n");
	printf("1. Create new list.\n");
	printf("2. Insert into list.\n");
	printf("3. Delete from list.\n");
	printf("4. Search in list\n\n");
	scanf("%d", &j);
	
	switch(j) {
		case 1:
	    	create();
			break;
		case 2:
	    	insert();
			break;
		case 3:
			del();
			break;
		case 4:
			printf("Search element selected.");
			break;
		default:
			break;
	}
}

void create() {
	
	int i, n;
	char val;
	
	printf("enter number of elements in the array\n");
	scanf(" %d",&n);
	int arr[n];
	
	for(i=0; i<n; i++) {
		printf("Enter integer %d:: ", i+1);
		scanf("%s",&arr[i]);
	}
	
	printf("The elements in the list are::\n");
	printf("\n****************************\n");
	for(i=0; i<n; i++) {
		printf("%s\n", &arr[i]);
	}
	printf("****************************\n");
}

void insert() {
	int position, c, n, value;
    
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    
    int array[n];
    
    printf("Enter %d integers\n", n);
    
    for (c = 0; c < n; c++) {
    	scanf("%d", &array[c]);
	}
    
    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &position);
    
    printf("Please enter the value\n");
    scanf("%d", &value);
    
    for (c = n - 1; c >= position - 1; c--) {
		array[c+1] = array[c];
	}  
    
    array[position-1] = value;
    
    printf("Resultant array is\n");
	printf("\n****************************\n");
    for (c = 0; c <= n; c++) {
		printf("%d\n", array[c]);
	}  
	printf("****************************\n");
}

void del() {
	int pos, c, n, val;
	
	printf("Enter the number of elements in the array\n");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter %d integers\n", n);
	
	for( c=0; c<n; c++ ) {
		scanf("%d", &arr[c]);
	}
    
    printf("Please enter the location where you want to delete an new element\n");
    scanf("%d", &pos);
	
	if ( pos>n+1 ) {
    	printf("Deletion not possible.\n");
	} else {	
    	for ( c=pos-1; c<n-1; c++ ){
        	arr[c] = arr[c+1];
		}

      	printf("Resultant array:\n");
		printf("\n****************************\n");
      	for (c = 0; c < n - 1; c++) {
         	printf("%d\n", arr[c]);
	  	}
		printf("****************************\n");
  	}
	
}
