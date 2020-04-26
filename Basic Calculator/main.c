#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Welcome to my Basic Calculator\n");

    int a, b;
    char op;
    float result;

    printf("Choose an operator (+,-,*,/): \n");
    scanf("%c", &op);

    printf("Choose your first number: \n");
    scanf("%d", &a);
    printf("Choose your sec number: \n");
    scanf("%d", &b);




    result = 0;

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("You did something wrong!");
    }
    printf("Result: %d %c %d = %f", a,op,b,result);
    return 0;

}
