#include<stdio.h>
int fun(int, int);
main()
{
	int c, a = 20, b= 30;
	c = fun(a, b);
	printf("%d", c);
}
int fun(int x, int y)
{
	return x - y;
}

