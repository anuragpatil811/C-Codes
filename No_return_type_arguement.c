#include<stdio.h>
void add(int, int);
main()
{
	int a=10, b = 20;
	add(a, b);
}
void add(int x, int y)
{
	printf("%d" , x + y);
}
