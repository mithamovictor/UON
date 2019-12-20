#include<stdio.h>
#include<stdlib.h>
#define STUDENT_NO 5
typedef  char string[50]; 
int main()
{
/* we define an array to enter the names of five students. 
Each element is of type string which we have defined above.
remember type definition
  */
string names[STUDENT_NO];
int i;
FILE * my_file ;/* we declare the buffer area*/
/*now we open the file for writing*/
my_file=fopen("data/students.dat","w");
/* we use a loop to get the student's names*/
if(my_file==NULL)
{
printf("\nCan't open specified file\n");
exit(0);
}
for(i=0;i<STUDENT_NO;i++)
{
	printf("\nEnter the name of student %d::",i+1);
	scanf(" %[^\n]s",names[i]);
}
/* now we write the names of the students into the file we opened */
for(i=0; i<STUDENT_NO;i++)
{
	if(i==0)
	  fprintf(my_file, "%s",names[i]);
	else
	 fprintf(my_file, "\n%s",names[i]);
}
fclose(my_file);
} 
