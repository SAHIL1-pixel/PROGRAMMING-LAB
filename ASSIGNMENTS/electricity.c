#include <stdio.h>

int main ()
{
    // define a variable to store units consumed
    int units;

    //ask user how much units are consumed
    printf(" Enter units consumed: ");
    scanf("%d", &units);

    //using if else conditions configure the bill

    //for units consumed <= 100
    if ( units <= 100 ) {
    printf ("Bill is: %.2f\n", 1.5*units);
    }
    //for units consumed > 100 & <= 200
    else if ( units > 100 && units <= 200)
    {
        // 1.5 rs bill for the first 100 units and then 2rs each for the remaining units
        printf("Bill is: %.2f\n",1.5*100 + (units - 100)*2);
    }
    // if units are more than 200 and less than equal to 300
    else if ( units > 200 && units <= 300)
    {
        //1.5 for the first 100 units, 2 for the next 100 and 3 for remaining 
        printf("Bill is: %.2f\n",1.5*100 + 2*100 + (units - 200)*3);
    } 
    //1.5rs for the first 100, 2rs fir the next 100 3rs for the next 100 and 5 rs for the remaining units each
    else {
        printf ( "Total bill is: %.2f", 100*1.5 + 100*2 + 100*3 + (units - 300)*5);
    }
    return 0;
}