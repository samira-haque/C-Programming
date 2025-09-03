#include<stdio.h>
int main()
{
    int n;
    printf("enter day number (1-7) : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("THIS IS SATURDAY\n");
        break;
    case 2:
        printf("THIS IS SUNDAY\n");
        break;
    case 3:
        printf("THIS IS MONDAY\n");
        break;
    case 4:
        printf("THIS IS TUESDAY\n");
        break;
    case 5:
        printf("THIS IS WEDNESDAY\n");
        break;
    case 6:
        printf("THIS IS THURSDAY\n");
        break;
    case 7:
        printf("THIS IS FRIDAY\n");
    default:
        printf("invalid Input\n");
        break;
    }
    return 0;
}
