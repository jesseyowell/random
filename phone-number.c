// Convert phone number format to dot format

#include <stdio.h>

int main(void) {

    int areacode, phonenum1, phonenum2;

    printf("Enter in phone number (xxx) xxx-xxxx: ");
    scanf("(%d) %d-%d", &areacode, &phonenum1, &phonenum2);

    printf("You entered: %d.%d.%d\n", areacode, phonenum1, phonenum2);

    return 0;
}