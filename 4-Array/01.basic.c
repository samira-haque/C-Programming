#include<stdio.h>
int main()
{
    int arr[5]={12,13,14,15,16,17,18};
    arr[1]=55;
    arr[6]=88;
    printf("%d\n",arr[1]);

    float a[4]={3.56,5.67,7.88,8.9};
    printf("%f\n",a[1]);

    char ar[5]={'a','b','c','d','e'};
    printf("%c\n",ar[3]);
    return 0;
}
