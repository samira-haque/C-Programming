#include<stdio.h>
#include<math.h>
int main()
{
    float radius;
    float pi=3.1416;
    printf("ENTER THE VALUE OF RADIUM : ");
    scanf("%f",&radius);
    float area=pi*pow(radius,2);
    printf("AREA OF THE CIRCLE IS : %f",area);
    return 0;
}
