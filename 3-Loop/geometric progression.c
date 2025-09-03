#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int gp=3;
    for(int i=0;i<n;i++)
    {
        printf("%d\n",gp);
        gp*=4;
    }
    return 0;
}
