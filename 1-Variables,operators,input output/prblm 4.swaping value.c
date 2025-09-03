#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER THE VALUE OF A :\n",a);
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B :\n",b);
    scanf("%d",&b);
    printf("before swapping the value\na=%d\nb=%d\n",a,b);


    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("after swapping\na=%d\nb=%d\n",a,b);
}
