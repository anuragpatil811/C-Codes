#include<stdio.h>
int main()
{
    int hardness, tensile_strength;
    float carbon_content;
    printf("Enter Hardness, Carbon Content, and Tensile Strength");
    scanf("%d%f%d", &hardness, &carbon_content, &tensile_strength);
    if(hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
    {
        printf("Grade is 10\n");
    }
    else if(hardness > 50 && carbon_content < 0.7)
    {
        printf("Grade is 9\n");
    }
    else if(carbon_content < 0.7 && tensile_strength > 5600)
    {
        printf("Grade is 8\n");
    }
    else if(hardness > 50 && tensile_strength > 5600)
    {
        printf("Grade is 7\n");
    }
    else if(hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600)
    {
        printf("Grade is 6\n");
    }
    else 
    {
        printf("Grade is 5\n");
    }
    return 0;
}