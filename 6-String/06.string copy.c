#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="samira haque";

    char *s2=s1;
    s1[0]='X';
    printf("%s",s2);
    return 0;
}
