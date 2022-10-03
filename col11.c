#include<stdio.h>
// mai math include kr k bhi kr skta tha 
int main(){
    int a,b,c;
    
    printf("Enter base :");
    scanf("%d",&a);
    c=a;
    printf("Enter power :");
    scanf("%d",&b);
    for (int i = 1; i <b; i++)
    {
        c=c*a;
        
    }
    printf("%d\n",c);
    
    
    return 0;
}