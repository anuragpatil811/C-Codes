#include<stdio.h>
int main()
{
	int arr[1000], i, n, sum = 0;
	printf("Enter size of the array:");
	scanf("%d" , &n);
	printf("Enter elements in array");
	for(i = 0; i<n; i++)
	{
		sum+=arr[i];
	}
	printf("Sum of array is %d\n" , sum);
	return 0;
}
