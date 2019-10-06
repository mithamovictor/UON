
#include <stdio.h>

int main ()
{
	float marks[6];
	int u=1;
	int y;
	char g;
	char p [] = "Passed";
	char f[] = "Failed";
	printf("Enter your marks\n");
	for(y=0; y<7; u++)
	{
		
		printf("Unit %d\n",u );
		scanf("%f", &marks[y]);

	  if (marks[y]>=0 && marks[y]<=100)
	  {
			if(marks[y]>=40)
			{
		   
				if(marks[y]>=70 && marks[y]<=100)
				{
					g='A';
				}
				else if(marks[y]>=60 && marks[y]<70)
				{
					g='B';	
				}
				else if(marks[y]>=50 && marks[y]<60)
				{
					g='C';
				}
				else if (marks[y]>=40 && marks[y]<50)
				{
					g='D';	
				}
					
				printf("Your Grade is %c and you have %s\n\n", g, p );	
			}
			else
			{
				g = 'E';
				printf("Your Grade is %c and you have %s\n\n",g,f);
		  }
	      
		}
		else
		{
			printf("Marks out of bounds!\n\n");
	  }	
		
		y=y+1;
	}
	
	
	return 0;
}
