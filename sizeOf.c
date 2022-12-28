#include <stdio.h>

/* This program is to do the following:
    Display byte size of:
        int
        char
        long
        long long
        double
        long double
        
        use %zd format specifier
        */
int sizeOf() {

    int variable = 0;
    char variable2 = 'a';
    long variable3 = 1.0;
    long long variable4 = 11.00;
    double variable5 = 12.12;
    long double variable6 = 1212.1212;

    printf("the amount of bytes an int uses are: %ld\n", sizeof(variable));
    printf("the amount of bytes a char uses are: %ld\n", sizeof(variable2)); 
    printf("the amount of bytes a long uses are: %ld\n", sizeof(variable3));
    printf("the amount of bytes a long long uses are: %ld\n", sizeof(variable4));  
    printf("the amount of bytes a double uses are: %ld\n", sizeof(variable5));
    printf("the amount of bytes a long double uses are: %ld\n", sizeof(variable6));

    return 0;
}