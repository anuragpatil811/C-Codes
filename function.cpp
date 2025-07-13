#include<stdio.h>
void add();	//function declaration
void add()	//function definition
{
	int sum,a,b;
	printf("Enter values:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Addition=%d",sum);
}
int main()
{
	add();
	
}
