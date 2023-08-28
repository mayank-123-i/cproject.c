#include <stdio.h>
#include <conio.h>

int main()
{
  int a;

  printf("Enter The number : ");
  scanf("%d",&a);

  if (a%2==0)
  {
    printf("%d is even number",a);
  }

  else
  {
     printf("%d is odd number",a);
  }
  
  
    return 0;
}