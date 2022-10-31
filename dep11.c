#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number-");
    scanf("%d",&a);
    printf("Enter second number-");
    scanf("%d",&b);
    printf("Enter third number-");
    scanf("%d",&c);
    if (a>=b)
    {
        if (a>=c)
        {
            printf("First number is greatest.");
        }
        else
        {
            printf("Third number is greatest.");
        }
    }
    else 
    {
        if (b>=c)
        {
            printf("Second is greatest.");
        }
        else
        {
            printf("Third number is greatest.");
        }
        
        
    }
    return 0;
}