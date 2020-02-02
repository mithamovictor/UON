#include<stdio.h>
void main()
{
	int array[50],c, n;
	
	printf("enter number of elements in the array\n");
	
	scanf(" %d",&n);
	
	printf("enter %d integers\n",n);
	
	for(c=0; c < n; c++)
	{
		    scanf(" %d",&array[c]);

		}
		printf("elements in the list are:\n");
			for(c=0; c < n; c++)

				printf("%d\n",array[c]);
}
