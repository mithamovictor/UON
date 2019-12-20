//Program1: Add student records into a file
#include<stdio.h>
#include<stdlib.h>
typedef  char string[50]; 
typedef struct 
{
	string name;
	int year;
	string reg_no;
} students; 
int main()
{
/*define a variable student whose type is students*/
students student;
int count=0;
char choice='y'; //we choose if to continue adding students
FILE * my_file ; //define the buffer area
//open the file for writing
string file_name="data/students.data";
my_file=fopen(file_name, "w");
printf("\n*******************************************");
printf("\n\n	This program adds records to a student's file");
printf("\n*******************************************\n\n");
if(my_file==NULL)
{
	printf("Couldn't open the file '%s' to add records. 	Bye!!",file_name);
	exit(1);
}
printf("\n\nDo you wish to add students??(y/n)");
choice=getchar(); 
//now get the students' details from the user
while(choice=='y')
{
	printf("\nPlease Enter the Student's 	name:::::::::::::::::");
	scanf(" %[^\n]s", student.name);
	printf("\nPlease Enter the Student's 	Registration Number::");
	scanf(" %[^\n]s", student.reg_no);
	printf("\nPlease Enter the Student's Year of 	Study::::::::");
	scanf(" %d[^\n]", &student.year);
	//write the details in the file
	if(count==0)
		fprintf(my_file,"%s",student.name);
	else
		fprintf(my_file,"\n%s",student.name);
	fprintf(my_file,"\n%s",student.reg_no);
	fprintf(my_file,"\n%d",student.year);
	printf("\n\nDo you wish to add more 	students??(y/n)");
	getchar();
	choice=getchar();
	count++; 
}//end while
fclose(my_file);
}//end main
