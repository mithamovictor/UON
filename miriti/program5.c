#include <stdio.h>
#define INCR 10;
typedef struct{
	char names[50];
	int age;
} Student;

void getStudent(Student * st )
{
	printf("Enter the student's names::");
	scanf("%[^\n]s",st->names);
	printf("Enter the student's age::");
	scanf("%d",&st->age);
}
void main()
{
	Student st1;
	getStudent(&st1);
	printf("Name::%s, age::%d",st1.names, st1.age);
	
}//end
