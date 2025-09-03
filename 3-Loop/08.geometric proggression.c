#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int gp = 3;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", gp);
        gp *= 4;
    }
    return 0;
}
