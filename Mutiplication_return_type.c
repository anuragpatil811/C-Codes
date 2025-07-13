#include<stdio.h>
int mul(int, int);
int mul(int a, int b)
{
	int mul;
	mul = a * b;
	return mul;
}
int main()
{
	int result, a, b;
	printf("Enter values:");
	scanf("%d%d" , &a, &b);
	result = mul(a, b);
	printf("Addition = %d" , result);
}
