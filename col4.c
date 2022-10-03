#include<stdio.h>
int main(){
    float a,b;
    printf("Enter length:");
    scanf("%f",&a);
    
    printf("Enter width:");
    scanf("%f",&b);
    
    printf("Perimeter of rectanle length %f and bradth %f is %.3f",a,b,2*(a+b));
    return 0;
}