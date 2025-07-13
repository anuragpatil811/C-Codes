#include<stdio.h>
int fun(int, int);
main()
{
	int c, a = 30, b = 40;
	c  = fun(a, b);
	printf("%d" , c);
}
int fun(int x, int y)
{
	return x / y;
}
