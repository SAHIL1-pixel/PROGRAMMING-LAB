#include <stdio.h>

int main() {
    int number;

    // Ask user for input 
    printf("Enter a number: ");
    scanf("%d", &number);

    // using if else conditions determine the numbers nature
    //if positive
    if (number > 0) {
        printf("The number is positive.\n");
    } 
    //if negative
    else if (number < 0) {
        printf("The number is negative.\n");
    } 
    // if not positive or negative then it must be zero
    else {
        printf("The number is zero.\n");
    }

    return 0;
}