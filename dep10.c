#include<stdio.h>
int main(){
    char a;
    printf("Enter a character to convert-");
    scanf("%c",&a);
    if (a>=97&&a<=122)
    {
        printf("%c",a-32);
    }
    else if (a>=65&&a<=90)
    {
        printf("%c",a+32);
    }
    
    
    return 0;
}