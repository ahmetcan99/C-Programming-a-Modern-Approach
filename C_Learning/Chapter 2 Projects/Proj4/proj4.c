#include <stdio.h>
#define TAX (5.0f / 100.0f)
int main(void)
{
    float money, moneyWithTax;

    printf("Enter the amount of dollars with cents: ");
    scanf("%f", &money);

    moneyWithTax = money + (money * TAX);

    printf("Amount with 5%% tax added: %.2f\n", moneyWithTax);

    return 0;

}

