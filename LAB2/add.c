#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("=== Addition of Two Numbers ===\n");
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\nSum = %d\n", sum);

    return 0;
}


