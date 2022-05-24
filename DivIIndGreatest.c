#include<stdio.h>
/*Divyaranjan Sahoo
Second Greater number among three  numbers*/
int main(){
  int a,b,c;

  printf("\nEnter the numbers here ~ ");
  scanf("%d%d%d",&a,&b,&c);

  if (a>b){
    if (a>c){
      printf("\n%d is the 2nd greatest numeber among the three\n",c);}

    else{
      printf("\n%d is the 2nd greatest number among the three\n",a );}}

  if (a<b){
    if (b>c){
      printf("\n%d is the 2nd greatest numeber among the three\n",c);}

    else{
      printf("\n%d is the 2nd greatest number among the three\n",b );}}
}
