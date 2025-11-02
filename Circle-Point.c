#include<stdio.h>
#include<math.h>
int main()
{
    int xc, yc, radius, x, y, distance;
    xc = 0;
    yc = 0;
    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter y:");
    scanf("%d", &y);
    printf("Enter radius:");
    scanf("%d", &radius);
    distance = sqrt(pow(x-xc, 2)+pow(y-yc, 2));
    printf("Distance:%d\n", distance);
    printf("Radius:%d\n", radius);
    if(distance <=radius)
    {
        printf("Point is inside the circle");
    }
    else
    {
        printf("Point lies outside the circle");
    }
}