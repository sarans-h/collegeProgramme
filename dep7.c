#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter side 1: ");
    scanf("%d",&a);
    printf("Enter side 2: ");
    scanf("%d",&b);
    printf("Enter side 3: ");
    scanf("%d",&c);
    if ((a+b>c)&&(a+c>b)&&(c+b>a))
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is invalid");
    }
    
    
    return 0;
}