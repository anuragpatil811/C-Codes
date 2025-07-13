#include<stdio.h>
int main()
{
	int a = 3, b = 4, *r, *p;
	p = &a;
	r = &b;
	int c = *r + *p;
	printf("%d" , c);
}
