#include<stdio.h>
int main(){
    float a;
    printf("Enter temperature in farenheit:");
    scanf("%f",&a);
    printf("Temperature in celcius %.3f",(a-32.000)*5/9);
    
    return 0;
}

    