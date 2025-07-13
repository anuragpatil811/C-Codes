#include<stdio.h>
struct student
{
	int rollno;
	char name[15];
	float marks;
}
s1[6];
int main()
{
	int i;
	for(i = 0; i<=2; i++)
	{
		printf("Enter roll no:");
		scanf("%d" , &s1[i].rollno);
		
		printf("Enter name:");
		scanf("%s" , &s1[i].name);
		
		printf("Enter marks:");
		scanf("%f" , &s1[i].marks);
	}
	for(i=0; i<=2; i++)
	{
		printf("Rollno = %d" , s1[i].rollno);
		printf("Student name = %s" , s1[i].name);
		printf("Student marks = %f" , s1[i].marks);
	}
}
