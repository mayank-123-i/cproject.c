#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b;
  float modulo;

  printf("Enter The value of a : ");
  scanf("%d",&a);

  printf("Enter The value of b : ");
  scanf("%d",&b);

  modulo=a%b;

  printf("The value of %d + %d is : %d\n",a,b,a+b);
  printf("The value of %d - %d is : %d\n",a,b,a-b);
  printf("The value of %d * %d is : %d\n",a,b,a*b);
  printf("The value of %d / %d is : %d\n",a,b,a/b);
  printf("The value of modulo is  : %f",modulo);


    return 0;
}