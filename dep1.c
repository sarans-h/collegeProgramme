#include<stdio.h>
int main(){
    int x,y;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    if(x>0&&y>0){
        printf("first quadrant");
    }
    else if(x<0&&y>0){
        printf("second quadrant");
    } 
    else if(x<0&&y<0){
        printf("third quadrant");
    } 
    else if(x>0&&y<0){
        printf("fourth quadrant");
    } 
    return 0;
}