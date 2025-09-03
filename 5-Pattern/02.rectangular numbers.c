#include<stdio.h>
int main()
{
    int r,c;
    printf("enter the rows : ");
    scanf("%d",&r);
    printf("enter the columns : ");
    scanf("%d",&c);

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            printf("%d  ",j);
        }
         printf("\n");

    }

}
