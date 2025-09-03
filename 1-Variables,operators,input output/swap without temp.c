#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("BEFORE SWAPPING :\n a=%d,b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("AFTER SWAPPING : \n a=%d,b=%d\n",a,b);

}
