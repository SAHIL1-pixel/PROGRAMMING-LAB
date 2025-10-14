#include <stdio.h>

int main ()
{
    float temparature;

    printf("Machine Temp");

    printf("Enter The temp of machine (in degree C)");
    scanf("%f", &temparature);

if (60<temparature && temparature<=80)
{
  printf("SAFE");
}

else {
    printf("WARNING");
}


}