#include<stdio.h>
int main(){
    int legs,head;
    printf("ENTER LEGS:");
    scanf("%d",&legs);
    printf("ENTER HEADS:");
    scanf("%d",&head);
    int goats,hen;
    
    goats=(legs-2*head)/2;
    
    printf("hen %d\n goat %d",head-goats,goats);
    // printf("hens=%d\ngoats=%d",head-goats,goats);
    return 0;
}