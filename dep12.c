#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first no-");
    scanf("%d",&a);
    printf("Enter second no-");
    scanf("%d",&b);
    switch (a>=b)
    {
    case 0:
        printf("second no is largest");
        break;
    case 1:
        switch (a==b)
        {
        case 0:
            printf("first no is largest");
            break;
        
        case 1:
            printf("both are equal");
            break;
        }
    }
    return 0;
}