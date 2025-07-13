#include<stdio.h>
int div();
int div()
{
	int a, b;
	scanf("%d%d" , &a, &b);
	return a / b;
}
int main()
{
	int c = div();
	printf("%d" , c);
}
