#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b) ;
    printf("%d + %d = %d", a, b, a+b);
}

void subtraction()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d - %d = %d", a, b, a-b);
}

void multiplication()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d * %d = %d", a, b, a*b);
}

void division()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d / %d = %d", a, b, a/b);
}

void modulus()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d %% %d = %d", a, b, a%b);
}

void square_root()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("sqrt(%d) = %lf", a, sqrt(a));
}

void power()
{
    int a, b;
    printf("Enter the base and the exp: ");
    scanf("%d %d", &a, &b);
    printf("%d^%d=%lf", a, b, pow(a,b));
}

void average()
{
    int cnt=0, num, sum=0;
    double avg;
    char c;
    printf("Enter the numbers (enter . to stop): ");
    while(1)
    {
        if(scanf("%d", &num) == 1)
        {
            sum+=num;
            cnt++;
        }
        else
        {
            scanf("%c", &c);
            if(c == '.')
                break;
        }
    }
    avg=(double)sum/cnt;
    printf("avg = %lf", avg);
}

int main()
{
    char operation;
    printf("\nWelcome to my calculator");
    printf("\n\'+\'- addition\n\'-\'- subtraction\n\'*\'- multiplication\n\'/\'- division\n\'%%\'- modulus\n\'s\'- square root\n\'^\'- power of a number\n\'a\'- calculate the average\n");
    printf("\nChoose a calculator operation: ");
    scanf("%c", &operation);
    if(operation == '+')
    {
        addition();
    }
    else if(operation == '-')
    {
        subtraction();
    }
    else if(operation == '*')
    {
        multiplication();
    }
    else if(operation == '/')
    {
        division();
    }
    else if(operation == '%')
    {
        modulus();
    }
    else if(operation == 's')
    {
        square_root();
    }
    else if(operation == '^')
    {
        power();
    }
    else if(operation == 'a')
    {
        average();
    }
    else
    {
        printf("Try again");
    }
    return 0;
}
