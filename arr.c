#include <stdio.h>
#include <string.h>

struct student
{
  char name[30];
  char id[10];
  int age;
  char course[30];
} student1;

void main() {

  // struct student student1;

  // struct student student1 = {"Vic", "123456", 25, "CS"};

  struct student s[10];

  // Declaring the variables manually
  // strcpy(student1.name, "Vic");
  // strcpy(student1.id, "123456");
  // student1.age=26;
  // strcpy(student1.course, "Computer Science");
  
  // Declaring the variables using scanf for one student.
  // printf("\nEnter the name of the student\n");
  // scanf("%s", student1.name);
  // printf("\nEnter the id of the student\n");
  // scanf("%s", student1.id);
  // printf("\nEnter the age of the student\n");
  // scanf("%d", &student1.age);
  // printf("\nEnter the course of the student\n");
  // scanf("%s", student1.course);
  // printf("\n\nThe student %s of ID %s and age %d is persuing %s\n\n", student1.name, student1.id, student1.age, student1.course);

  for (int i = 0; i < 10; i++ ) {
    printf("\nEnter the name of the student %d\n", i+1);
    scanf("%[^\n]s", s[i].name);
    printf("\nEnter the id of the student %d\n", i+1);
    scanf("%s", s[i].id);
    printf("\nEnter the age of the student %d\n", i+1);
    scanf("%d", &s[i].age);
    printf("\nEnter the course of the student %d\n", i+1);
    scanf("%[^\n]s", s[i].course);


    printf("\n\nThe student %s of ID %s and age %d is persuing %s\n\n", s[i].name, s[i].id, s[i].age, s[i].course);
  }
}
