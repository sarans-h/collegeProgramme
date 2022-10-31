#include<stdio.h>
int main(){
    int elec;
    float bill;
    printf("Electricity consumed");
    scanf("%d",&elec);
    if (elec<=50){
        bill=elec*0.50;
        printf("your bill amount is %4.2f",(float)(bill+0.2*bill));
    }
    else if (elec<=150)
    {
        bill=0.5*50+elec*0.75;
        printf("your bill amount is %4.2f",(float)(bill+0.2*bill));

    }
    else if (elec<=250)
    {
        bill=0.5*50+100*0.75+elec*1.20;
        printf("your bill amount is %4.2f",(float)(bill+0.2*bill));

    }
    else if (elec>250)
    {
        bill=0.5*50+100*0.75+100*1.20+elec*1.50;
        printf("your bill amount is %4.2f",(float)(bill+0.2*bill));

    }
    else
    {
        printf("enter valid amount");
    }
    
    
    
    return 0;
}