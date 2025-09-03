#include<stdio.h>
int main()
{
    char str[20]="SAMIRAA";
    printf("%s\n",str);

    str[2]='O';

    for(int i=6;i>=2;i--)
        str[i+1]=str[i];

    printf("%s",str);
    return 0;
}
