#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;

    printf("Enter base length:");
    scanf("%f", &a);
    printf("Enter height:");
    scanf("%f", &b);
    
    
    c=(0.5)*a*b;
    printf("Area of triangle is %.2f",c);
    return 0;
}