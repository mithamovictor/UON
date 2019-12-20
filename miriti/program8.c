#include <stdio.h>
float mean(float nums[], int size)
{
	int i;
	float sum=0;
	float  avg;
	for(i=0;i<size;i++)
	{
		sum+=nums[i];
	}
	avg=sum/size;
	return avg;
	
}
void main()
{
	
	float numbers[5];
	float average=0;
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d of %d number btn 0 and 100::",i+1,5);
		scanf("%f",&numbers[i]);
	}
	average=mean(numbers,5);
	printf("\nThe mean is %.2f",average);
	
}//end
