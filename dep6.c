#include<stdio.h>
// can b done with structure
int main(){
    int t1hrs,t1min,t1sec;
    int t2hrs,t2min,t2sec;
    int thrs,tmin,tsec;
    int t3hrs,t3min,t3sec;
    printf("Enter time you start coding-");
    scanf("%d:%d:%d",&t1hrs,&t1min,&t1sec);
    printf("Enter time you end coding-");
    scanf("%d:%d:%d",&t2hrs,&t2min,&t2sec);
    printf("Enter time taken to rectify error-");
    scanf("%d:%d:%d",&t3hrs,&t3min,&t3sec);
    // calculating t2-t1
      
    int t1tsec=t1sec+t1min*60+t1hrs*60*60;
    int t2tsec=t2sec+t2min*60+t2hrs*60*60;
    int ttsec=t2tsec-t1tsec;
    int t3tsec=t3sec+t3min*60+t3hrs*60*60;
    int k=ttsec+t3tsec;
    thrs=k/3600;
    tmin=((k-(3600*thrs))/60);
    tsec=(k-(3600*thrs)-(tmin*60));
    printf("Total time required %d:%d:%d",thrs,tmin,tsec);
    return 0;
}