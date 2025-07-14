#include <stdio.h>
int add(int a, int b) {
    int sum = a + b;
    return sum;
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result = add(num1, num2);
    printf("Sum: %d\n", result);

    return 0;
}

