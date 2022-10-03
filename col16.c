#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    float g,h;
    printf("Enter first  subject number.");
    scanf("%d",&a);
    printf("Enter second  subject number.");
    scanf("%d",&b);
    printf("Enter third  subject number.");
    scanf("%d",&c);
    printf("Enter fourth subject number.");
    scanf("%d",&d);
    printf("Enter fifth subject number.");
    scanf("%d",&e);
    f=a+b+c+d+e;
    g=f/5;
    h=f*100/500;
    printf("Average of marks=%f\n",g);

    printf("Percentage of marks=%f\n",h);
    return 0;
}