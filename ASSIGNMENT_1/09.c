#include<stdio.h>
int main()
{
    int hrs,mins,sec,total_seconds;
    printf("Enter hrs,min,sec to convert into seconds");
    scanf("%d %d %d",&hrs,&mins,&sec);
     
    total_seconds = ( hrs * 3600 ) + ( mins * 60 ) + sec ;
    printf("Total seconds is : %d",total_seconds);
}