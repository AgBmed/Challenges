#include <stdio.h>
/* 
   Challenge consists of:
   Asking user for minutes from the terminal
   Outputting the number of years and days the minutes
   are equivalent to.
   
   Need a minutes variable (int)
   minutes in years  (double)
   Years (double)
   Days (double)
   */

int main () {

    int minutes;
    double MinutesInYears = 0;
    double Days = 0;

    printf("Please provide me with the amount of minutes you'd like to convert \n");
    scanf("%d", &minutes);

    /* to convert minutes into years:
    1 year = 365 days
    1 day = 24 hours
    1 hour = 60 minutes */

    MinutesInYears = (double) minutes / (365 * 24 * 60);
    Days = (double) minutes / (60 * 24);

    printf("The amount of years these minutes are is: %f\n", MinutesInYears);
    printf("The amount of days these minutes are is: %f\n", Days);

    return 0;
}