#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int fibonacci = 1;
    for (int i = 1; i <= n - 2; i++)
    {
        fibonacci = a + b;
        a = b;
        b = fibonacci;
    }
    printf("The %dth fibonacci is %d\n", n, fibonacci);
    return 0;
}
