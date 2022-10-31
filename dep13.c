/* only enter 4 digits year and enter valid dates and months*/

#include<stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
}da;
int calc_age(da curr,da dob);
int main(){
    da current,dateofb;
    printf("Enter current date-");
    scanf("%d/%d/%d",&current.day,&current.month,&current.year);
    printf("Enter date of birth-");
    scanf("%d/%d/%d",&dateofb.day,&dateofb.month,&dateofb.year);
    calc_age(current,dateofb);
    return 0;
}
int calc_age(da curr,da dob){
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (dob.day>curr.day)
    {
        curr.day=curr.day+days[dob.month-1];
        curr.month=curr.month-1;
        
    }
    if (dob.month>curr.month)
    {
        curr.year=curr.year-1;
        curr.month=curr.month+12;
    }
    printf("%d years %d months %d days",curr.year-dob.year,curr.month-dob.month,curr.day-dob.day);
    
}