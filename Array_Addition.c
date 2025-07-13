#include<stdio.h>
main()
{
	int arr[5] = {5, 4, 3, 2, 1}, sum = 0, i;
	for(i = 0; i<5; i++)
	{
		sum = sum + arr[i];
		{
			printf(" %d " , sum);
		}
		printf("\n");
	}
}
