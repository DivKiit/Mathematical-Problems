#include<stdio.h>
/*Divyaranjan
Character Recognition*/
int main(){
  char Alpha;
  printf("\nEnter the Alphabet here ~ ");
  scanf("%c",&Alpha);

  if (Alpha>'@' && Alpha<'[' || Alpha>'`' && Alpha<'{'){
    printf("\nThe input is an Alphabet\n");}

  if (Alpha>47 && Alpha<58){
    printf("\nThe input is a Digit\n");}

  else{
    printf("\nThe input is a Special Character\n");}

  return 0;
}
