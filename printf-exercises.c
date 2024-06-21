// printf exercises

#include <stdio.h>

int main(void) {

    int i;
    float x, y;

    printf("%6d,%4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);

    printf("%d\n",1);
    printf(" %d\n",1);

    printf("%d-%d-%d\n",2,2,2);
    printf("%d -%d -%d\n",2,2,2);
    printf("%f\n", 3.0);
    printf("%f \n", 3.0);

    printf("Enter 3 numbers: ");    // 12.3, 45.6, 789
    scanf("%f%d%f", &x, &i, &y);   

    printf("%f,%d,%f\n", x, i, y); // 12.300000, 45, .600000


    return 0;
}

