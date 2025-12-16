#include<stdio.h>
int main()
{
    int num, digit, sum, temp;
    printf("rmstrong numbers between 1 and 500 are:\n");
    num=1;
    while(num<=500)
    {
        temp = num;
        sum = 0;
        while(temp > 0)
        {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if(sum==num)
        {
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}