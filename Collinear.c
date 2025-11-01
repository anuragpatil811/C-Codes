//Program to find if all three points (x1, y1), (x2, y2), (x3, y3) fall on one straight line using Slope of a line formula
#include<stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter coordinates of first point (x1, y1):\n");
    scanf("%d%d", &x1, &y1);

    printf("Enter coordinates for seconfd point(x2, y2):\n");
    scanf("%d%d", &x2, &y2);

    printf("Enter coordinates for third point(x3, y3):\n");
    scanf("%d%d", &x3, &y3);

    int slope1, slope2;
    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);
    if(slope1 == slope2)
    {
        printf("All three points fall on one straight line");
    }
    else{
        printf("All three points do not fall on one straight line");
    }
}