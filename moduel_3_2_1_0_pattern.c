#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, j;

    printf("Enter a Number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
      for(j=1;j<=i;j++)
{
    printf("%d",j%2);
}
        printf("\n");
    }
    return 0;
}
