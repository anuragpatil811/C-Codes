#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int x=2, i, b=4;
    char ch;
    char a[100];
    ch = a[i];
    printf("Enter string a:");
    scanf("%s", &a[i]);
    printf("%s\n", a[i]);
    char nstr = ((a[x] + b)%26) + b;
    a[i] = ch;
    printf("%s\n", nstr);
}