#include<stdio.h>
int main(){
    int d,w,y,k;
    k=d;
    printf("Enter no of days:");
    scanf("%d",&d);
    y=k/365;
    k=k%365;
    w=k/7;
    k=k%7;
    d=k;
    printf("YEARS=%d\nWEEKS=%d\nDAYS=%d",y,w,d);
    return 0;
}
