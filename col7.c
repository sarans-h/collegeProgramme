#include<stdio.h>
int main(){
    float a;
    printf("Enter length in centimeter:");
    scanf("%f",&a);
    printf("Enter length in meter:%f\n",a/100);
    printf("Enter length in kilometer:%.3f\n",a/100000);
    return 0;
}