#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinates of point:");
    scanf("%d%d", &x, &y);

    if(x==0 && y==0)
    {
        printf("Point lie in origin");
    }
    else if(x==0)
    {
        printf("point lies on Y-axis");
    }
    else if(y==0)
    {
        printf("Point lies on X-axis"); 
    }
    return 0;
}