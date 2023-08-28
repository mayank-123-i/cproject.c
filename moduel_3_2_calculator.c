#include <stdio.h>
#include <conio.h>

int main()
{

    char opr;
    int a, b;
    float modulo;

    printf("Chosse this operater (+,-,*,/) : ");
    scanf("%c", &opr);

    printf("Enter The value of a : ");
    scanf("%d", &a);

    printf("Enter The value of b : ");
    scanf("%d", &b);

    switch (opr)
    {
    case '+':
        printf("The value of %d + %d is : %d\n",a,b,a+b);
        break;

    case '-':
        printf("The value of %d - %d is : %d\n",a,b,a-b);
        break;

    case '*':
        printf("The value of %d * %d is : %d\n",a,b,a*b);
        break;

    case '/':
        printf("The value of %d / %d is : %d\n",a,b,a/b);
        break;            
    
    default:
    printf("Enter valid operator");
        break;
    }

    modulo=a%b;

    printf("The modulo is : %f",modulo);



    return 0;
}