#include <stdio.h>
int main()
{
    float a, b, c;

    printf("Enter first angle:");
    scanf("%f", &a);
    printf("Enter second angle");
    scanf("%f", &b);

    printf("Third angle is:");
    c = 180.00 - a - b;
    printf("%.2f", c);

    return 0;
}