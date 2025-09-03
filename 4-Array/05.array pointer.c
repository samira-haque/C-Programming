#include<stdio.h>
int main()
{
    int numbers[5];
    int *ptr=&numbers[0];
    printf("enter number-->\n");
    for(int i=0;i<=4;i++)
    {
        printf("%d index number : ",i);
        scanf("%d",&numbers[i]);

    }
    for(int i=0;i<=4;i++)
    {
        printf("%d index number output=%d\n ",i,numbers[i]);
    }
    return 0;
}
