#include <stdio.h>

int main()
{
	float pie;
	int radius, height;
	
	pie = 3.14;
	
	printf("Please enter the radius and height respectively with a space between them ");
	scanf("%d%d", &radius, &height );
	
	float volume = pie * radius * radius * height;
	printf( "The volume is %f", volume );
	
	return 0;
}
