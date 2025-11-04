/*If any year is input through the keyboard write a program to find out what is the day on 1st January of this year 
according to Gregorian calendar. */
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d", &year);
    int day = 1;
    int month = 13;
    int adjusted_year = year - 1;
    int C = adjusted_year / 100;
    int D = adjusted_year % 100;
    int f = (day + (13 * (month + 1)) / 5 + D + D / 4 + C / 4 - 2 * C) % 7;
     if (f < 0) 
     {
        f += 7;
     } 
     char *days[] = 
     {
        "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"
     };
      printf("January 1st, %d is a %s.\n", year, days[f]);

    return 0;
}