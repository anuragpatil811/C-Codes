#include<stdio.h>
int add(int , int);
main()
{
	int a=10, b=20, c;
	c = add(a, b);
	printf("%d" , c);
}
int add(int x, int y)
{
	return x + y;
}
