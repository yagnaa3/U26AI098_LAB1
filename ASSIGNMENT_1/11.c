#include <stdio.h>
int main()
{
    int Total_seconds,hrs,mins,sec;
    printf("Enter totalm. seconds :");
    scanf("%d",&Total_seconds);

    hrs=Total_seconds/3600;
    mins=(Total_seconds%3600)/60;
    sec=Total_seconds%60;

    printf("The total time is %dhr %dmin %d sec",hrs,mins,sec);
}