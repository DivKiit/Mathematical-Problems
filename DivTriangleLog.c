#include<stdio.h>
#include<math.h>
/*Divyaranjan Sahoo
Triangle area with if else*/
int main()
{float a,b,c,s,Area;
  printf("Enter the values of sides of triangle ~ ");
  scanf("%f%f%f",&a,&b,&c);

  if (a+b>c && a+c>b && c+b>a){
    printf("\nThe side values configure a triangle\n");
    s=(a+b+c)/2;
    Area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe area of triangle is %.3f\n",Area);}

  if (a+b<c || a+c<b || c+b<a){
    printf("The given side values doesn't form a triangle");}

  return 0;}
