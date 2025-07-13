#include<stdio.h>
int main()
{
	int i, sum, a;
	for(i = 0; i<=10; i++)
	{
		if(i == 4)
		{
			goto sum;
		}
	}
	sum:
		scanf("%d" , &a);
		sum = a + a;
		printf("The sum of two numbers is %d\n" , sum);
}
