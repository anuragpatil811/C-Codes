#include<stdio.h>
struct Gymnasium
{
	char member_name[14];
	float weight;
	int diet;
}
s1;
int main()
{
	printf("\nEnter the member's name:");
	scanf("%s" , &s1.member_name);
	printf("Member's name = %s\n" , s1.member_name);
	
	printf("\nEnter weight:");
	scanf("%f" , &s1.weight);
	printf("weight = %f\n" , s1.weight);
	
	printf("\nEnter diet:");
	scanf("%d" , &s1.diet);
	printf("Diet = %d\n",s1.diet);
}
