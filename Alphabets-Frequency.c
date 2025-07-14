/*
Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints


All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

Sample Input 0

a11472o5t6
Sample Output 0

0 2 1 0 1 1 1 1 0 0 
Explanation 0

In the given string:

 occurs two times.
 and  occur one time each.
The remaining digits  and  don't occur at all.
Sample Input 1

lw4n88j12n1
Sample Output 1

0 2 1 0 1 0 0 0 2 0 
Sample Input 2

1v88886l256338ar0ekk
Sample Output 2

1 1 1 2 0 1 2 0 5 0 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 1000  // As per constraints

int main() {
    char num[MAX_SIZE];  // Corrected from 'char num'
    int freq[10] = {0};  // Only store frequency of digits 0-9

    scanf("%s", num);  // No '&' needed for strings

    int len = strlen(num);  // Store length of string
    for (int i = 0; i < len; i++) {
        if (num[i] >= '0' && num[i] <= '9') {  // Process only digits
            freq[num[i] - '0']++;  // Convert char to integer
        }
    }

    // Print frequencies in required format
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }
    
    return 0;
}
