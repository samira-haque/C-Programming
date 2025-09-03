#include<stdio.h>
int main()
{
    int num;
    printf("ENTER THE VALUE OF NUMBER: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive number\n",num);
        if(num%2==0)
        {
            printf("EVEN NUMBER\n");
        }
        else
        {
            printf("ODD NUMBER\n");
        }
    }
    else
    {
        printf("NEGATIVE NUMBER\n");
    }
    return 0;
}
