#include<stdio.h>
int main()
{
    int num;
    printf("ENter the number : ");
    scanf("%d",&num);

    int a=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            a=1;
            break;
        }

    }
    if(num==1)
        printf("1 is neither prime nor composite \n");
    else if(a==0)
        printf("%d is prime number \n",num);
    else
        printf("The given number is composite\n");
    return 0;
}
