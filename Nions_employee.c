#include<stdio.h>
union employee
{
	int id;
	char name[12];
	float salary;
}
s1;
int main()
{
	printf("\nEnter employee id:");
	scanf("%d" , &s1.id);
	
	printf("\nEnter employee name:");
	scanf("%s" , &s1.name);
	
	printf("\nEnter employee salary:");
	scanf("%f" , &s1.salary);
	
	printf("Employee id = %d\n" , s1.id);
	printf("Employee name =  %s\n" , s1.name);
	printf("Employee salary = %f\n" , s1.salary);
	
}
