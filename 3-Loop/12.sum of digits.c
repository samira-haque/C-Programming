#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    int lastdigit=0;
    int sum=0;
    while(n!=0)
    {
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("sum of the digits :%d\n",sum);
    return 0;
}
