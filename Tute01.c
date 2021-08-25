/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mrk1;
  float mrk2;
  float avg;

  printf("enter subject 1 mark ");
  scanf("%f",&mrk1);

  printf("enter subject 2 mark");
  scanf("%f",&mrk2);

  avg=(mrk1+mrk2)/2;

  printf("avarage mark is :%f",avg);

  return 0;
}

