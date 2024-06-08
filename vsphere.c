// calculate the volume of a 3D sphere
// we use the math library because figuring out PI is kinda hard..

#include <stdio.h>
#include <math.h>

int main(void) {
    float r = 10.0;

    float volume = (4.0f / 3.0f) * M_PI * (r * r * r);

    printf("volume of sphere is: %.2f\n", volume);

    return 0;
}