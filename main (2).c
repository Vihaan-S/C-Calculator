#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int add(int *first, int *second)
{
    return *first + *second;
}

int subtract(int *first, int *second)
{
    return *first - *second;
}

int multiply(int *first, int *second)
{
    return *first * *second;
}

int divide(int *first, int *second)
{
    return *first / *second;
}

int main()
{
    int first_number;
    int second_number;
    char op;
    
    printf("type operator\n");
    scanf(" %c", &op);
    
    printf("type your first number\n");
    scanf("%d", &first_number);
    
    if (op != '@')
    {
        if (op == '^')
        {
             printf("type your power\n");
        }
        else 
        {        
            printf("type your second number\n");

        }
        scanf("%d", &second_number);
    }

        
    switch (op)
    {
        case '+':
            printf("%d", add(&first_number, &second_number));
            break;
        case '-':
            printf("%d", subtract(&first_number, &second_number));
            break;
        case '*':
            printf("%d", multiply(&first_number, &second_number));
            break;
        case '/':
             printf("%d", divide(&first_number, &second_number));
        case '@':
            printf("%f", sqrt(first_number));
            break;
         case '^':
            printf("%f", pow(first_number, second_number));
            break;
        
        default:
            printf("unknown operator");
            exit(0);
        
    }
        
    return 0;
}

