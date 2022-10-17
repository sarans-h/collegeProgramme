#include<stdio.h>
int main(){
    int a,b;
    printf("enter a and b");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Valuee of a and b before interchange: %d %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Valuee of a and b after interchange: %d %d",a,b);
    return 0;
}