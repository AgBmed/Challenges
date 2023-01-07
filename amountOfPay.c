#include <stdio.h>

/*
    create a C program that calculates weekly pay
    ask user to enter number of hours worked in a week via keyboard
    program should:
        - display as output the gross pay, taxes and net pay
        - Basic pay raate
        - overtime (hours above 40 hrs time and a half rate)
        - tax rate:
            - 15% for first $300
            - 20% for the next $150
            - 25% for the rest

    needs if / else statement for overtime 


    example:
    45 hours worked
    40 hours = 480
    5 hours = 90
    total gross pay = 570

    tax 15% for the first $300
    tax 20% for the next $150
    tax 25% for the next $120

    1st thing to do: 
    get user input - done
    2nd: 
    figure out gross pay - done
    3rd:
    taxes - in progress
    4th:
    net pay (gross pay - taxes)

*/

int amountOfPay() {

    double hourlyRate = 12.50;
    double overtimeRate = 1.5*(hourlyRate);
    double allocation15 = 0;
    double allocation20 = 0;
    double allocation25 = 0;
    double totalTaxesPaid = 0;
    int hoursWorked = 0;
    int regularHoursWorked = 0;
    int overtimeHoursWorked = 0;
    double grossPay = 0;
    double netPay = 0;

    /* #1 User Input */
    printf("Let's get some calculations going for the amount of pay! please give me the amount of hours worked: \n");
    scanf("%d", &hoursWorked);

    /* #2 Gross Pay */
    printf("You worked %d hours this week\n", hoursWorked);

    if (hoursWorked > 40) {

        regularHoursWorked = 40;
        overtimeHoursWorked = hoursWorked - 40;

        printf("Your regular hours worked are: %d, and your overtime hours worked are: %d \n", regularHoursWorked, overtimeHoursWorked);

    } 
    else {

        regularHoursWorked = hoursWorked;
        overtimeHoursWorked = 0;

        printf("Your regular hours worked are below 40, at  %d \n", regularHoursWorked);
    }

    grossPay = (double) ((regularHoursWorked * hourlyRate) + (overtimeHoursWorked * overtimeRate));
    
    printf("Your gross pay would be: $%.2f\n", grossPay);

    /* #3 Taxes */
    if (grossPay >= 300) {
        allocation15 = 300 * 0.15;

        if ( (grossPay - 300) >= 150) {
            allocation20 = 150 * 0.20;

            if (((grossPay - 300) - 150) > 0) {
                allocation25 = ((grossPay - 300) - 150) * 0.25;

                printf("Taxes paid Tier 1: $%.2f, Tier 2: $%.2f, Tier 3: $%.2f\n", allocation15, allocation20, allocation25);

            } else {
                allocation25 = 0;
                printf("Taxes paid Tier 1: $%.2f, Tier 2: $%.2f, Tier 3: $%.2f\n", allocation15, allocation20, allocation25);
            }
        } else {
            allocation20 = (grossPay - 300) * 0.20;
            allocation25 = 0;
            printf("Taxes paid Tier 1: $%.2f, Tier 2: $%.2f, Tier 3: $%.2f\n", allocation15, allocation20, allocation25);
        }
    } else {
        allocation15 = grossPay * 0.15;
        allocation20 = 0;
        allocation25 = 0;

        printf("You didn't make much this week, so you didn't pay much, taxes paid Tier 1: $%.2f\n", allocation15);
    }

    /* #4 Net pay */
    totalTaxesPaid = allocation15 + allocation20 + allocation25;
    netPay = grossPay - totalTaxesPaid;

    printf("Your net pay is: $%.2f \n", netPay);
    
    return 0;
}