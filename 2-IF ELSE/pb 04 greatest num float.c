#include<stdio.h>
int main()
{
    float num1,num2,num3,num4;
    printf("enter four numbers : ");
    scanf("%f%f%f%f",&num1,&num2,&num3,&num4);

    float greatest=num1;

    if(num2>greatest)
        greatest=num2;
    if(num3>greatest)
        greatest=num3;
    if(num4>greatest)
        greatest=num4;

    printf("The greatest number is %.3f\n",greatest);
    return 0;
}
