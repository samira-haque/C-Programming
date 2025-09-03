#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a:",a);
    scanf("%d",&a);
    int b;
    printf("enter the value of b:",b);
    scanf("%d",&b);
    int c;
    printf("enter the value of c:",c);
    scanf("%d",&c);

    int sum=a+b+c;

    if(sum<40 || a<33 || b<33 || c<33)
    {
        printf("Fail\n");
    }else
    {
        printf("pass");
    }

}
