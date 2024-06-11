// Asks dollar amount and shows how to pay with smallest number of bills

#include <stdio.h>

int main(void) {

    int dollar, amt;
    printf("Enter dollar amount: ");
    scanf("%d",&dollar);

    amt = dollar / 20; 
    printf("$20 bills: %d\n", amt);
    dollar = dollar - (amt * 20);

    amt = dollar / 10;
    printf("$10 bills: %d\n", amt);
    dollar = dollar - (amt * 10);
    
    amt = dollar / 5;
    printf("$5 bills: %d\n", amt);
    dollar = dollar - (amt * 5);

    amt = dollar / 1;
    printf("$1 bills: %d\n", amt);

    return 0;
}