#include<stdio.h>
int main(){
    char k;
    int h;
    printf("enter the vehicle- ");
    scanf("%c",&k);
    printf("Enter hours-");
    scanf("%d",&h);
    if (k=='c'||k=='C')
    {
        printf("YOUR PARKING CHARGE IS :%drupees",h*10);
    }
    else if (k=='t'||k=='b'||k=='B'||k=='T')
    {
        printf("YOUR PARKING CHARGE IS :%drupees",h*20);
    }
    else if (k=='s'||k=='S'||k=='M'||k=='m')
    {
        printf("YOUR PARKING CHARGE IS :%drupees",h*5);
    }
    

    return 0;
}