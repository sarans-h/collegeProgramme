#include<stdio.h>
int main(){
    int a;
    printf("enter value of a ");
    scanf("%d",&a);
    a&1||printf("even");
    a&1&&printf("odd");

    return 0;
}