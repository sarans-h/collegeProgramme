#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e;
    printf("Enter Principle.");
    scanf("%d",&a);
    printf("Enter Rate.");
    scanf("%d",&b);
    printf("Enter time in years.");
    scanf("%d",&c);
    d=1+(b/100);
    e=pow(d,c);
    printf("Compound interestt =%d",a*e);
    return 0;
}

