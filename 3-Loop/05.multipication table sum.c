#include<stdio.h>
int main()
{
    int n=7;
    int sum=0;

    for(int i=1; i<=10; i++)
    {
        int product=n*i;
        sum+=product;
        printf("%dx%d =%d\n",n,i,product);
    }
    printf("sum of the multipication of table 7 :%d\n",sum);
    return 0;
}
