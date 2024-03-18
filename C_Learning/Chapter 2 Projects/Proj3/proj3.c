/* Calculates the volume of a sphere of given radius */

#include <stdio.h>
#define PI 3.14159
#define FRACTION (4.0f / 3.0f)

int main(void)
{
    float radius, volume;

    printf("Enter the radius of sphere: ");
    scanf("%f", &radius);

    volume = FRACTION * PI * (radius * radius * radius);

    printf("Volume of the %.0f radius sphere is %.1f.\n", radius, volume);

    return 0;

}

