#include<stdio.h>
int main()
{
    int age1, age2, age3;
    printf("Enter age1:");
    scanf("%d", &age1);
    printf("Age1: %d\n", age1);

    printf("Enter age2:");
    scanf("%d", &age2);
    printf("Age2: %d\n", age2);

    printf("Enter Age3:");
    scanf("%d", &age3);
    printf("Age3: %d\n", age3);
    if(age1 < age2 && age1 < age3)
    {
        printf("Ram is the youngest: %d\n", age1);
    }
    else if(age2<age1 && age2 < age3)
    {
        printf("Shyam is the youngest: %d\n", age2);
    }
 
    else if(age3<age1 && age3 < age2)
    {
        printf("Ajay is the youngest: %d\n", age3);
    }

}