#include<stdio.h>
int main()
{
	int r, c, a[100][100], sum=0, i, j;
	printf("\nEnter the number of rows:");
	scanf("%d" , &r);
	printf("\nEnter the number of columns:");
	scanf("%d" , &c);
	printf("\nEnter the elements of array");
	
	for(i = 0; i<=r; i++)
	{
		for(j = 0; j<c; j++)
		{
			scanf("%d" , &a[i][j]);
			
		}
	}
	for(i = 0; i<r; i++)
	{
		for(j = 0; j<c; j++)
		{
			printf("%d " , a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("Sum=%d",sum);
	
}
