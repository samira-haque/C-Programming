#include<stdio.h>
int main()
{
    int x=5;
    x++;
    printf("%d\n",x);
    x--;
    printf("%d\n",x);
    ++x;
    printf("%d\n",x);
    --x;
    printf("%d\n",x);

    printf("\n");

    int y=10;
    printf("%d\n",y);
    printf("%d\n",y++);

    printf("\n");

    int z=10;
    printf("%d\n",z);
    printf("%d\n",++z);
    return 0;
}
