#include<stdio.h>
/*Divyaranjan Sahoo
Greater number among three distinct numbers*/
int main(){
  int a,b,c;

  printf("\nEnter the numbers here ~ ");
  scanf("%d%d%d",&a,&b,&c);
  
  if (a>b){
    if (a>c){
      printf("\n%d is the greatest numeber among the three\n",a);}

    else{
      printf("\n%d is the greatest number among the three\n",c );}}

  if (a<b){
    if (b>c){
      printf("\n%d is the greatest numeber among the three\n",b);}

    else{
      printf("\n%d is the greatest number among the three\n",c );}}
}
