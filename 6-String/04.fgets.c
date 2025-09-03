#include<stdio.h>
int main ()
{
    char name[100];
    printf("enter your name : ");
    fgets(name,100,stdin);
    printf("your name is ");
    puts(name);
    return 0;

}
