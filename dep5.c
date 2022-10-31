#include<stdio.h>
int main(){
    char a;
    printf("enter:");
    scanf("%c",&a);
    if ((a>96&&a<123)||(a>64&&a<91))
    {
        printf("you entered a character");
    }
    else if (a>=48&&a<=57)
    {
        printf("you enterd a digit");
    }
    else
    {
        printf("you entered a special charactr");
    }
    
    
    
    return 0;
}