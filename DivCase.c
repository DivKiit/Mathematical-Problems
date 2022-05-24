#include<stdio.h>
/*Divyaranjan
Uppercase or lowercase*/
int main(){
  char Alpha;
  printf("\nEnter the Alphabet here ~ ");
  scanf("%c",&Alpha);

  if (Alpha>'@' && Alpha<'['){
    printf("\nThe alphabet is in Uppercase\n");}

  if (Alpha>'`' && Alpha<'{'){
    printf("\nThe alphabet is in Lowercase\n");}

  return 0;
}
