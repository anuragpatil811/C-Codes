/*
Given an array, of size , reverse it.

Example: If array, , after reversing it, the array should be, .

Input Format

The first line contains an integer, , denoting the size of the array. The next line contains  space-separated integers denoting the elements of the array.

Constraints


, where  is the  element of the array.

Output Format

The output is handled by the code given in the editor, which would print the array.

Sample Input 0

6
16 13 7 2 1 12 
Sample Output 0

12 1 2 7 13 16 
Explanation 0

Given array,  = . After reversing the array,  = 

Sample Input 1

7
1 13 15 20 12 13 2 
Sample Output 1

2 13 12 20 15 13 1 
Sample Input 2

8
15 5 16 15 17 11 5 11 
Sample Output 2

11 5 11 17 15 16 5 15 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int temp;

  for (int i = 0; i < num / 2; i++) {
    temp = arr[i];
    arr[i] = arr[num - i - 1];
    arr[num - i - 1] = temp;
  }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}