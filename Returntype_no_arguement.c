#include<stdio.h>
int add();
main()
{
	int c;
	c = add();
	printf("%d" , c);
}
int add()
{
	int a = 10, b = 20;
	return a + b;
}
