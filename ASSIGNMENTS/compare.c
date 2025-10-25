#include <stdio.h>

int main()
{   
    // define three variable number1, number2, number 3
    int number1, number2, number3;

    // Take input of three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    // Compare the numbers using if-else
    if (number1 > number2 && number1 > number3) {
        printf("%d is the largest number.\n", number1);
    }
    else if (number2 > number1 && number2 > number3) {
        printf("%d is the largest number.\n", number2);
    }
    else if (number3 > number1 && number3 > number2) {
        printf("%d is the largest number.\n", number3);
    }
    else {
        printf("All numbers are equal.\n");
    }

    return 0;
}