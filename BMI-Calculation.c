//BMI calculator using if-else-else if statements
#include<stdio.h>
int main()
{
    float height, weight, bmi;
    printf("Enter weight of a person(in kg):\n");
    scanf("%f", &weight);
    printf("Enter height of personn(in meters):\n");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("BMI is: %.2f\n", bmi);
    if(bmi < 15)
    {
        printf("Starvation\n");
    }
    else if(bmi > 15.1 && bmi < 17.5)
    {
        printf("Anorexic\n");
    }
    else if(bmi > 17.6 && bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if(bmi > 18.6 && bmi < 24.9)
    {
        printf("Ideal\n");
    }
    else if(bmi > 25 && bmi < 25.9)
    {
        printf("Overweight\n");
    }
    else if(bmi > 30 && bmi < 30.9)
    {
        printf("Obese\n");
    }
    else if(bmi >= 40)
    {
        printf("Morbidly Obese\n");
    }
}