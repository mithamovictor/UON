//program 2 –  read from a file
#include<stdio.h>
#include<stdlib.h>
typedef  char string[50]; 
#define STUDENT_NO 5
main()
{
/* we define an array to enter the names of five students. Each element is of type string which we have defined above.
remember type defination*/
int i;
string names[STUDENT_NO];
string name;
FILE * my_file ;/* we declare the buffer area*/
//now we open the file for reading*/
my_file=fopen("data/students.dat","r");
/* now we read the names of the students from the file we  have opened */
if(my_file==NULL)
{
printf("Can't open the specified file");
exit(1);
}
for(i=0; i<STUDENT_NO;i++)
{
	fscanf(my_file, " %[^\n]s",names[i]);
}
fclose(my_file);
/* we use a loop to print out the student's names*/
for(i=0; i<STUDENT_NO;i++)
{
	printf("%s\n",names[i]);
}  
}