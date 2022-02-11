/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2; //define variables
  float avg;

  printf("enter the first mark :") //input mark1
  scanf("%d",&mark1);

  printf("enter the second mark :") //input mark2
  scanf("%d",&mark2);

  avg = (float)(mark1 + mark2)/2; //Calculate the average

  printf("average : %.2f",avg); //print average

  

  
  
  return 0; //end process
}

