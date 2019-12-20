//Program2: reads the file created by the above //program and writes the contents onto the screen	
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#define TRUE 1
typedef  char string[50]; 
typedef struct 
{
string name;
int year;
string reg_no;
} students; 
int main()
{
int flag=TRUE;
/*define a variable student whose type is students*/
students student;
FILE * my_file ; //define the buffer area
//open the file for writing
string file_name="data/students.data";
int i=0;
my_file=fopen(file_name,"r");
printf("\n********************************************");
printf("\n\n	This program reads the contents of the students.data");
printf("\n file and prints them on the screen");
printf("\n*********************************************\n\n");
if(my_file==NULL)
{
	printf("Couldn't open the file '%s' to add records. 			Bye!!",file_name);
exit(1);
} 
//read a record at a time and write it on the screen
while(!feof(my_file))
{
	i++;
	printf("\nDetails of Student %d \n",i);
	fscanf(my_file, "%[^\n]s", student.name);
	getc(my_file);
	fscanf(my_file, " %[^\n]s", student.reg_no);
	getc(my_file);
	fscanf(my_file," %d", &student.year);
	getc(my_file);
	//write the details in the file
	printf("Name:::::::::::::::::%s\n",student.name);
       printf("Registration Number::%s\n",student.reg_no);
	printf("Year of Study::::::::%d\n",student.year);
}
fclose(my_file);
}
