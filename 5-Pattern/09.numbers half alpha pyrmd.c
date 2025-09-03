
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of rows : ");
    scanf("%d",&n);



    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            int x= (char)a+64;
            if(i%2==0){
            printf("%c ",x);}
            else
            {
                printf("%d ",j);
            }
            a++;
        }
        printf("\n");
    }
}
