#include <stdio.h>

int main(void)
{
    int x, solution;

    printf("Enter an integer to solve the 3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6: ");
    scanf("%d", &x);

    solution = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;

    printf("Solution to the polynomial is: %d\n", solution);

    return 0;
}
