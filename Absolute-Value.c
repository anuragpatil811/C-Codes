#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter a value:");
    scanf("%d", &num);
    int AbsoluteValue = abs(num);
    printf("Absolute value: %d", AbsoluteValue);
}