#include<stdio.h>
int main(){
    int lpy;
    printf("Enter the year- ");
    scanf("%d",&lpy);
    if (lpy%400==0)
    {
        printf("Yes it is a leap year");
    }
    else if (lpy%4==0&&lpy%100!=0)
    {
        printf("Yes it is a leap year");
    }
    else
    {
        printf("Not a leap year");
    }
    
    
    

    return 0;
}