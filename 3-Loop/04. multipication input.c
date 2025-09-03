#include<stdio.h>
int main()
{
    int n;
    printf("Enter the multiplication number:\n");
    scanf("%d",&n);

    int m;
    printf("Enter the multiplication times:\n");
    scanf("%d",&m);

    for(int i=1;i<=m;i++)
    {
        printf("%d x %d =%d\n",n,i,i*n);
    }
}
