#include <stdio.h>

int main() 
{
	int radius;
	int ans;
	// Passed area as a float instead of int because it is a decimal.
	// In programming decimals are floating points.
	float area;
	
	radius = 10;
	area = 3.14;

	ans = area  * radius * radius;
	
	// Here I called a %f in the statement so as to output the variable. 
	// That's why Meet you couldn't get the value to output.
	printf("\nYour area is: %.2f \n", area);
	printf("\nYour radius is: %d \n", radius);
	printf("\nYour answer is: %d \n", ans);

	return 0;
}
