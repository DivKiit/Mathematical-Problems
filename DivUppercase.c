#include<stdio.h>
/*Divyaranjan
Character Recognition*/
int main(){
  char Alpha;
  printf("\nEnter the Alphabet here ~ ");
  scanf("%c",&Alpha);

  if (Alpha>='a' && Alpha<='z'){
    Alpha-=32;
    printf("\nThe uppercase of the alphabet is %c\n", Alpha);}

  else if (Alpha>='A' && Alpha<='Z'){
    printf("\nThe input is already in an uppercase alphabet\n");}

  return 0;
}
