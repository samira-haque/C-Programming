#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value\n ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        printf("this is triangle %d %d %d",a,b,c);
    }
    else
    {
        printf("this is not triangle");
    }
    return 0;

}
