// enter in dd/mm/yyyy format and get back yyyymmdd

#include <stdio.h>

int main (void) {
    
    int day, month, year;

    printf("Enter in date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered: %4d%.2d%2d\n", year, month, day);
    
    return 0;

}