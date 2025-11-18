#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    
    y = (x>5 ? 3:4);
    printf("%d\n", y);
    return 0;
}