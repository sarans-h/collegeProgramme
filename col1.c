#include<stdio.h>
int main(){
    int a;
    char b;
    float c;
    printf("enter integer:");
    scanf("%d",&a);
    printf("enter character:");
    scanf("\n");
    scanf("%c",&b);
    printf("enter float:");
    scanf("%f",&c);
    printf("entered integer is %d\n",a);
    printf("entered character is %c\n",b);
    printf("entered float is %f\n",c);
    return 0;
}