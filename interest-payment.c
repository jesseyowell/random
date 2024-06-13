// We calculcate the monthly interest of a loan and show the first, second, and third payments. 

#include <stdio.h>


int main(void) {

    float loan, interest, mpayment, balance;

    printf("Enter in loan amount: ");
    scanf("%f",&loan);

    printf("Enter in interest rate: ");
    scanf("%f",&interest);

    printf("Enter in monthly payment: ");
    scanf("%f",&mpayment);

    interest = interest * .01;

    balance = (loan - mpayment) + (loan * interest) / 12;
    printf("Balance remaining after first payment: %.2f\n", balance);
    
    balance = (balance - mpayment) + (balance * interest) / 12;
    printf("Balance remaining after second payment: %.2f\n", balance);
    
    balance = (balance - mpayment) + (balance * interest) / 12;
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}