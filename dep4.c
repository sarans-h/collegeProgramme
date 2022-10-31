#include<stdio.h>
int main(){
    float cp,sp,mainp;
    printf("enter cost price: ");
    scanf("%f",&cp);
    printf("enter maintenance price: ");
    scanf("%f",&mainp); 
    printf("enter sellig price: ");
    scanf("%f",&sp);
    float totalcp=cp+mainp;
    if((sp-totalcp)>0){
        printf("profit percentage= %.2f%%",(sp-totalcp)*100/totalcp);
    }
    else if ((totalcp-sp)>0)
    {
        printf("loss percentage= %.2f%%",(totalcp-sp)*100/totalcp);
    }
    else{
        printf("no loss no profit");
    }
    
    
    return 0;
}