#include <stdio.h>
int main ()
{
    int num;
    //get the input from user
    printf("Enter the number: ");
    scanf("%d", &num);
    //using if else follow the conditions
    if (num > 0)
    {
       printf("Sum of first %d natural numbers are: %d", num*(num+1)/2);
    }
    
    else (printf("please enter a natural number"));
    return 0;
    
}