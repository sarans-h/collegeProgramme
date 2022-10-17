#include<stdio.h>
// entr amnt and find no of 2k , 500,100 notes
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