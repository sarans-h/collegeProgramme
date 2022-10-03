#include<stdio.h>
int main(){
    float a,b;
    printf("Enter length:");
    scanf("%f",&a);
    
    printf("Enter width:");
    scanf("%f",&b);
    
    printf("Area of rectanle length %f and bradth %f is %.3f",a,b,a*b);
    return 0;
}