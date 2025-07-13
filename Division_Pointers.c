#include<stdio.h>
int main()
{
	int a = 40, b = 80, *r, *p;
	p = &a;
	r = &b;
	int c = *r / *p;
	printf("%d" , c);
}
