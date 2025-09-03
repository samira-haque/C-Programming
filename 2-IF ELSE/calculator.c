#include<stdio.h>
int main()
{
    char operator;
    double first,second;
    printf("choose an operator (+,-,*,/) : ");
    scanf("%c",&operator);
    printf("ENTER TWO OPERANDS:\n");
    scanf("%lf%lf",&first,&second);

    switch (operator)
    {

    case '+':
        printf("%.2lf+%.2lf=%.2lf",first,second,first+second);
        break;
    case '-':
        printf("%.2lf-%.2lf=%.2lf",first,second,first-second);
        break;
    case '*':
        printf("%.2lf*%.2lf=%.2lf",first,second,first*second);
        break;
    case '/':
        printf("%.2lf/%.2lf=%.2lf",first,second,first/second);
        break;


    }
}
