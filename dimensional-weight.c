#include <stdio.h>

int main(void) {

    int length, width, height, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = length * width * height;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx,%dx,%dx\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;

}