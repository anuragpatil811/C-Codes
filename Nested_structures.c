#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	struct address
	{
		char city[20];
		char state[20];
		int pincode;
	}
	a1;
}
s1;
int main()
{
	printf("\nEnter student roll no:");
	scanf("%d" , &s1.rollno);
	printf("Roll number = %d\n" , s1.rollno);
	
	printf("\nEnter student name:");
	scanf("%s" , &s1.name);
	printf("Name=%s\n" , s1.name);
	
	printf("\nEnter city:");
	scanf("%s" , &s1.a1.city);
	printf("City = %s\n" , s1.a1.city);
	
	printf("Enter state:");
	scanf("%s" , &s1.a1.state);
	printf("state = %s" , s1.a1.state);
	
	printf("Enter pincode:");
	scanf("%d" , &s1.a1.pincode);
	printf("pincode = %d\n" , s1.a1.pincode);
}
