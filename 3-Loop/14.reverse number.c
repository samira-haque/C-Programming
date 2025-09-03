#include<stdio.h>
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);

    int rev=0;
    while(num>0)
    {
        rev=rev+(num%10);
        rev=rev*10;
        num=num/10;
    }
    rev=rev/10;
    printf("reversed number is %d",rev);
}
