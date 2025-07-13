#include<stdio.h>
struct gymnasium
{
	int diet;
	char name[12];
	float weight;
}
s1[5];
int main()
{
	int i;
	for(i=0; i<2; i++)
	{
		printf("\nEnter the number name:");
		scanf("%s" , &s1[i].name);
		
		printf("\nEnter the diet:");
		scanf("%d" , &s1[i].diet);
		
		printf("\nEnter weight:");
		scanf("%f" , &s1[i].weight);
	}
	for(i=0; i<2; i++)
	{
		printf("Member name=%s\n" , s1[i].name);
		printf("Member diet=%d\n" , s1[i].diet);
		printf("Member weight=%f\n" , s1[i].weight);
	}
}
