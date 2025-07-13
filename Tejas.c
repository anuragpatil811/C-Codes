#include<stdio.h>
int main()
{
	int i;
	for(i = 0; i<=10; i++)
	{
		if(i == 5)
		{
			goto jay;
		}
		jay:
			printf("Anurag\n");
	}
}
