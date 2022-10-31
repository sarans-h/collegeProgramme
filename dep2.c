#include<stdio.h>
int main(){
    int mat,phy,chem,total;
    printf("enter maths marks:");
    scanf("%d",&mat);
    printf("enter physics marks:");
    scanf("%d",&phy);
    printf("enter chemistry marks:");
    scanf("%d",&chem);
    total=mat+chem+phy;
    if (total>=180)
    {
        if (mat<65)
        {
            printf("You are not eligible b/c of maths marks.");
        }
        else if (phy<55)
        {
            printf("You are not eligible b/c of physics marks.");
            
        }
        else if (chem<50)
        {
            printf("You are not eligible b/c of chemistry marks.");
            
        }
        else
        {
            printf("You are eligible.");
        }

        
    }
    else
    {
        printf("You are not eligible b/c your total marks.");
    }
    
    

    return 0;
}