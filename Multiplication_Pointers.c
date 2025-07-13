#include<stdio.h>
int main()
{
	int a = 40, b = 20, *r, *p;
	r = &a;
	p = &b;
	int c = *r * *p;
	printf("%d" , c);
	
}
