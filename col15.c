#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;

    printf("Enter side:");
    scanf("%f", &a);
    
    b=sqrt(3);
    c=(b/4)*a*a;
    printf("Area of triangle is %.2f",c);
    return 0;
}