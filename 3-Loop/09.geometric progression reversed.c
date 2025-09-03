#include<stdio.h>
int main()
{
    int n;
    printf("Enter the term : ");
    scanf("%d",&n);

    float gp=100;
    for(float i=0;i<=n;i++)
    {
        printf("%.2f\n",gp);
        gp=gp/2;
    }
    return 0;
}
