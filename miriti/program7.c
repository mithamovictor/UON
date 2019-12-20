#include <stdio.h>
typedef struct{
	char names[50];
	int age;
} Student;
Student students[2];
void getStudents(Student  st[] )
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter the student's names::");
		scanf("%[^\n]s",st[i].names);
		printf("Enter the student's age::");
		scanf("%d",&st[i].age);
		getchar();
	}
}
void main()
{
	int i;
	getStudents(students);
	for(i=0;i<2;i++)
	{
		printf("\nName::%s, age::%d",students[i].names, students[i].age);
	}
	
}//end
