#include<stdio.h>
struct student
{
	int rollno;
	char name[14];
	float marks;
	
}
s1;
int main()
{
	printf("\nEnter the roll number:");
	scanf("%d" , &s1.rollno);
	printf("Student roll number = %d\n" , s1.rollno);
	
	printf("\nEnter the student's name:");
	scanf("%s" , &s1.name);
	printf("Student name = %s\n" , s1.name);
	
	printf("\nEnter the marks scored by student:");
	scanf("%f" , &s1.marks);
	printf("Student marks = %f\n" , &s1.marks);
}
