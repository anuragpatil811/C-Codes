#include<stdio.h>
int main()
{
    char a;
    int y;
    scanf("%c", &a);
    
    y = (a>=65 && a<=90 ? 1:0);
    printf("%d\n", y);
    return 0;
}