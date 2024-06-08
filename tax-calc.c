// calculates an arbitrary SF sales tax of 8.63% (as of June 7th 2024) to your purchase.

#include <stdio.h>
#define SFSALESTAX 0.0863f

int main(void) {

    float amt;
    
    printf("how much was your purchase? ");
    scanf("%f", &amt);

    printf("purchase with tax is: $%.2f\n", amt + (amt * SFSALESTAX));

    return 0;
}