#include<stdio.h>
struct football
{
	char name[12];
	int age;
	float weight;
}
s1[8];
int main()
{
	int i;
	for(i = 0; i<3; i++)
	{
		printf("\nEnter the player name:");
		scanf("%s" , &s1[i].name);
		
		printf("\nEnter age:");
		scanf("%d" , &s1[i].age);
		
		printf("\nEnter weight:");
		scanf("%f" , &s1[i].weight);
	}
	for(i = 0; i<3; i++)
	{
		printf("Player name = %s\n" , s1[i].name);
		printf("Player age = %d\n" , s1[i].age);
		printf("Player weight = %f\n" , s1[i].weight);
	}
}
