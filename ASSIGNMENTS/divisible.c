#include <stdio.h>
int main(){
    //define a variable num
    int num;
    //give user prompt to enter a number and store its value in num
    printf("Enter a number");
    scanf("%d", &num);
    //put condition for divisible by 5 and 11 
    if (num % 5 == 0 && num % 11 == 0)
    {
    //if num is divible by 5 and 11
        printf("%d is Divisible",num);
    }
    //if it is not divisible by 5 nd 11
    else (printf("%d is not divisible"),num);
    return 0;
    
}