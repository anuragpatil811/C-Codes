#include<stdio.h>
int sub();
int sub()
{
	int a, b;
	scanf("%d%d" , &a, &b);
	return a-b;
	
}
int main()
{
	int c = sub();
	printf("%d" , c);
}
