#include<stdio.h>
int main()
{
    float cp, sp, p, l;
    printf("Enter Selling Price:", sp);
    scanf("%f", &sp);
    printf("Enter Cost Price:", cp);
    scanf("%f", &cp);
    p = sp-cp;
    l = cp-sp;
    if(p>0)
       printf("Profit", p);
    if(l > 0)
       printf("Loss", l);
    if(p==0)
    printf("Neither profit nor loss");
}