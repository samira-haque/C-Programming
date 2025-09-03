#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE YEAR : ",n);
    scanf("%d",&n);

    if(n%4==0 && n%100!=0 || n%400==0 )
    {
        printf("THIS YEAR IS LEAP YEAR *_* \n");
    }
    else
    {
        printf("THIS YEAR IS NOT LEAP YEAR -_- ");
    }
}
