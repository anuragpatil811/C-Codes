//Using Conditional operators, find the type of job based on the salary input by the user
#include<stdio.h>
int main()
{
    float sal;
    printf("Enter the salary:");
    scanf("%f", &sal);
    if(sal >= 25000 && sal <= 40000)
    {
        printf("Manager\n");
    }
    else if(sal >= 15000 && sal < 25000)
    {
        printf("Accountant\n");
    }
    else if(sal < 15000)
    {
        printf("Clerk\n");
    }    
    return 0;
}