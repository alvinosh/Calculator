#include <stdio.h>
#include <math.h>

double sum(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

double square_root(double a)
{
    return sqrt(a);
}

double power(double a, double m)
{
    return pow(a, m);
}

int main()
{
    double num1, num2;
    char op;
    printf("CALC> ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        printf("Sum: %.2lf\n", sum(num1, num2));
        break;
    case '-':
        printf("Subtraction: %.2lf\n", subtract(num1, num2));
        break;
    case '*':
        printf("Multiplication: %.2lf\n", multiply(num1, num2));
        break;
    case '/':
        printf("Division: %.2lf\n", divide(num1, num2));
        break;
    case '^':
        printf("First number to the power of second number: %.2lf\n", power(num1, num2));
        break;
    default:
        printf("Invalid operator\n");
        break;
    }

    printf("Square root of first number: %.2lf\n", square_root(num1));

    return 0;
}