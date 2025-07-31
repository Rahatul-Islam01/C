#include<stdio.h>
int FirstDayOfYear(int year){

int day = (year*365 + ((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
return day;


}
int main(){
char* months[] ={"January","February","March","April","May","June","July","August","September","October","November","December"};
int DaysInMonths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int i,j, TotalDays,year;
int WeeklyDay=0, counter=0;
printf("Enter year:\n");
scanf("%d",&year);
printf("\n\n***--***---**** %d ****----***--***\n\n",year);

if((year%4==0 && year%100!=0)||(year%400==0)){
        DaysInMonths[1]=29;

}
WeeklyDay=FirstDayOfYear(year);

for(i=0;i<12;i++){
    printf("\n\n\n------------- %s ---------------\n",months[i]);
    printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");
    for(counter=1;counter<=WeeklyDay;counter++){
        printf("      ");
    }

    TotalDays = DaysInMonths[i];

    for(j=1;j<=TotalDays;j++){

        printf("%6d", j);
        WeeklyDay++;

        if(WeeklyDay>6){

            WeeklyDay=0;
            printf("\n");

        }
    }
}
return 0;

}
