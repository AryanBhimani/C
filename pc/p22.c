#include<stdio.h>
double cal(double val1, double val2, double ope)
{
    if (ope=='+')
    {
        printf("addition of two number is %lf", val1 + val2);
    }
    else if (ope=='-')
    {
        printf("subtraction of two numbers is %lf", val1 - val2);
    }
    else if (ope=='*')
    {
        printf("multiplication of two numbers is %lf", val1 * val2);
    }
    else if (ope=='/')
    {
        printf("division of two numbers is %lf", val1 / val2);
    }
    else
    {
        printf("invalid operator");
    }

    void main()
    {
        double val1,val2;
        char ope;
        printf("enter the first number");
        scanf("%lf", &val1);

        printf("enter the second number");
        scanf("%lf", &val2);

        printf("enter the operator");
        scanf("%lf", &ope);

        cal(val1,val2,ope);
    }
}