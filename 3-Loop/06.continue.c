#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i==3)
        {
            printf("\n");
            continue;
        }
        printf("%d\n",i);
    }
}
