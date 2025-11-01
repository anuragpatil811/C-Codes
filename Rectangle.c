/*Given the length and breadth of a rectangle, writea program to find whether the area of the rectangle is greater than 
   its perimeter. For example, the area of rectangle with length=5, and breadth=4 is greater than its perimeter.
*/
#include<stdio.h>
int main()
{
    int l, b, area, perimeter;
    printf("Enter length:");
    scanf("%d", &l);

    printf("Enter breadth:");
    scanf("%d", &b);

    area = l*b;
    perimeter = 2 * (l + b);
    if(area > perimeter)
    {
        printf("Area is greater than perimeter");
    }
    else
    {
        printf("Area is smaller than perimeter");
    }
}