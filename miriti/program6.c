#include <stdio.h>
#define INCR 10;
typedef struct{
	char names[50];
	int age;
} Student;


void main()
{
	Student st1;
	printf("Enter the student's names::");
	scanf("%[^\n]s",st1.names);
	printf("Enter the student's age::");
	scanf("%d",&st1.age);
	printf("Name::%s, age::%d",st1.names, st1.age);
	
}//end
