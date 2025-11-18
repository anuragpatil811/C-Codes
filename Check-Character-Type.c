#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter a character:");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90)
    {
        printf("Upper case\n");
    }
     if(ch>=97 && ch<=122)
    {
        printf("Lower case\n");
    }
    if(ch>=48 && ch<=57)
    {
        printf("Digit\n");
    }
 
    if((ch>=0 && ch<48) || (ch>57 && ch<65) || (ch>90 && ch<97) || ch>122)
    {
        printf("Special Symbol\n");
    }
    return 0;
    
}