#include<stdio.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d",&age);
    if(12>age)
    {
        printf("child");
    }
    else if(18>age)
    {
        printf("teenager");
    }
    else
    {
        printf("adult");
    }
}
