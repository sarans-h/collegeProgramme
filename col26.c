#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter marks of student one:");
    scanf("%d",&a);
    printf("enter marks of student two:");
    scanf("%d",&b);
    printf("enter marks of student three:");
    scanf("%d",&c);
    int least;
    a<=b?(a<=c?printf("student 1 least"):printf("student three least")):(b<c?printf("student two least"):printf("student three least"));
    
    return 0;
}