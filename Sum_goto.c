#include<stdio.h>
int main()
{
	int sum = 0, i;
	for(i = 0; i<=6; i++)
	{
		sum = sum + i;
		if(i == 4)
		{
			goto printing;
		}
	}
	printing :
		printf("Sum is %d\n" , sum);
}
