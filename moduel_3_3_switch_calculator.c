#include <stdio.h>

int main()
{
    int a, b;

    char opr;

    printf("Enter your choice (+, -, *, /): ");
    scanf("%c", &opr);

    printf("Enter the value of a : \n");
    scanf("%d", &a);

    printf("Enter the value of b : \n");
    scanf("%d", &b);

        switch (opr)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Error: division by 0\n");
        }
        else
        {
            printf("%d / %d = %f\n", a, b, (float)a / b);
        }
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}