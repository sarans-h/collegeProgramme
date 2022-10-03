#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Principle.");
    scanf("%d",&a);
    printf("Enter Rate.");
    scanf("%d",&b);
    printf("Enter time in years.");
    scanf("%d",&c);
    printf("Simple interestt =%d",(a*b*c)/100);
    return 0;
}