#include<stdio.h>
int main()
{
    int a;
    printf("enter the value ",a);
    scanf("%d",&a);
    int b;
    printf("enter the value ",b);
    scanf("%d",&b);
    int c;
    printf("enter the value  ",c);
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("%d is greatest\n",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greatest\n",b);
    }
    else
    {
        printf("%d is greatest",c);
    }
    return 0;
}
