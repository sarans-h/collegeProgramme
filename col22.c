#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    float g,h;
    printf("ENTER PHYSICS MARKS:");
    scanf("%d",&a);
    printf("ENTER CHEMISTRY MARKS:");
    scanf("%d",&b);
    printf("ENTER MATHS MARKS:");
    scanf("%d",&c);
    printf("ENTER ENGLISH MARKS:");
    scanf("%d",&d);
    printf("ENTER COMPUTER MARKS:");
    scanf("%d",&e);
    f=a+b+c+d+e;
    g=f/5;
    h=f*100/500; //percentage
    (h<40)&&printf("YOU FAILED MARKS NEEDED TO PASS ARE: %.1f",200-h*5);
    (h>40)&&printf("YOU PASSED YOUR PERCENTAGE IS : %.2f%%",h);

    return 0;
}