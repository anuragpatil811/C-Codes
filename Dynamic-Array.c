/*
An array is a container object that holds a fixed number of values of a single type. To create an array in C, we can do int arr[n];. Here, arr, is a variable array which holds up to  integers. The above array is a static array that has memory allocated at compile time. A dynamic array can be created in C, using the malloc function and the memory is allocated on the heap at runtime. To create an integer array,  of size , int *arr = (int*)malloc(n * sizeof(int)), where  points to the base address of the array. When you have finished with the array, use free(arr) to deallocate the memory.

In this challenge, create an array of size  dynamically, and read the values from stdin. Iterate the array calculating the sum of all elements. Print the sum and free the memory where the array is stored.

While it is true that you can sum the elements as they are read, without first storing them to an array, but you will not get the experience working with an array. Efficiency will be required later.

Input Format

The first line contains an integer, .
The next line contains  space-separated integers.

Constraints



Output Format

Print the sum of the integers in the array.

Sample Input 0

6
16 13 7 2 1 12 
Sample Output 0

51
Sample Input 1

7
1 13 15 20 12 13 2 
Sample Output 1

76
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {  // Check if malloc failed
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Accumulate sum
    }

    printf("%d\n", sum);  // Print the total sum

    free(arr);  // Free allocated memory

    return 0;
}
