#include<stdio.h>
main()
{
	int a[2] [2] = {5,6,7,8} , i, j;
	for(i = 0; i<2; i++)
	{
		for(j = 0; j<2; j++)
		{
			printf(" %d " , a[i][j]);
		}
		printf("\n");
	}
}
