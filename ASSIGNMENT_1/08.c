#include <stdio.h>
int main()
{
    long total_sec = 31558150;
    int days, hrs, mins, sec;

    days = total_sec / 86400;
    total_sec = total_sec % 86400;

    hrs = total_sec / 3600;
    total_sec = total_sec % 3600;

    mins = total_sec / 60;
    sec = total_sec % 60;

    printf("Days = %d\n", days);
    printf("Hours = %d\n", hrs);
    printf("Minutes = %d\n", mins);
    printf("Seconds = %d\n", sec);

}