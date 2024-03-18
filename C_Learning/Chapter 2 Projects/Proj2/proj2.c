/* Calculates volume of a sphere with a 10 meter radius */

#include <stdio.h>
#define PI 3.14
#define FRACTION (4.0f/3.0f)

int main()
{
    int radius = 10, volume;

    volume = FRACTION * PI * radius * radius * radius;
    
    printf("Volume of a	sphere with a 10 meter radius is %d\n", volume);

    return 0;    
}
