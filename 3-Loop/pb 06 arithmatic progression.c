#include<stdio.h>
int main()
{
    int n;
    printf("Enter terms n Arithmetic Progression :",n);
    scanf("%d",&n);


    int ap=4;
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",ap);
        ap=ap+3;
    }
    return 0;
}
