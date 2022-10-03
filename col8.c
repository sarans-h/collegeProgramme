#include<stdio.h>
int main(){
    float a;
    printf("Enter temperature in celcius:");
    scanf("%f",&a);
    printf("Temperature in farenheit %.3f",(a*9/5)+32.000);
    
    return 0;
}