#include<stdio.h>
int main(){
    int d,t,f,o;
    printf("Enter amount:");
    scanf("%d",&d);
    t=d/2000;
    d=d%2000;
    f=d/500;
    d=d%500;
    o=d/100;

    printf("2000=%d\n500=%d\n100=%d",t,f,o);
    
}