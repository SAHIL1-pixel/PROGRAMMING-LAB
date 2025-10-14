#include <stdio.h>

int main() {
    float strength1, strength2;

  printf ("== tensile strength comparison ==");

  printf("Enter The Tensile strength of Material 1(in Mpa)");
  scanf("%f", &strength1);

  printf("Enter The Tensile Strength Of material 2(in Mpa)");
  scanf("%f", &strength2);

  if (strength1>strength2) {
    printf("\n First Material Has Higher Tensile Strength (%.2f Mpa).\n", strength1);
  }
  
  else if (strength2>strength1)
  {
    printf("\n Second Material Has Higher Tensile Strength (%.2f Mpa).\n", strength2);
  }
  else
  {
      printf("both strengths are equal");
  }
  return 0;
}