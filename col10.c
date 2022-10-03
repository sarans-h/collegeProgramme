#include<stdio.h>
int main(){
    int d,w,y;
    printf("Enter no of days:");
    scanf("%d",&d);
    y=d/365;
    w=d%365;
    d=d-(y*365+w*7);
    printf("YEARS=%d\nWEEKS=%d\nDAYS=%d",y,w,d);
    return 0;
}