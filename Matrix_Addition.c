#include<stdio.h>
int main()
{
	int r, c, a[100][100], b[100][100], sum[100][100], i, j;
	printf("Enter the number of rows:\n");
	scanf("%d" , &r);
	printf("Enter the number of columns:\n");
	scanf("%d" , &c);
	printf("\nEnter elements of first matrix:");
	for(i = 0; i<r; ++i)
	{
	for(j = 0; j<c; ++j)
	{
		printf("Enter element:");
		scanf("%d" , &a[i][j]);
	}
}
	printf("Enter elements of second matrix:\n");
	for(i = 0; i<r; ++i)
	{
	for(j = 0; j<c; ++j)
	{
		printf("Enter elements b:");
		scanf("%d" , &b[i][j]);
	}
}
	for(i = 0; i<r; ++i)
	{
	for(j = 0; j<c; ++j)
	{
		sum[i][j] = a[i][j] + b[i][j];
		printf("%d ",sum[i][j]);
	}
	printf("\n");
}
	return 0;
}
