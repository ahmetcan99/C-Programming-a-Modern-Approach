/* Shows how to pay given amount using the smallest number of 20, 10, 5 and 1 dollar bills */

#include <stdio.h>

int main(void)
{
    int money;

    printf("Enter the money amount: ");
    scanf("%d", &money);

    printf("Bills of 20: %d times\n", money / 20);
    money = money % 20;
    printf("Bills of 10: %d times\n", money / 10);
    money = money % 10;
    printf("Bills of 5: %d times\n", money / 5);
    money = money % 5;
    printf("Bills of 1: %d times\n", money);

    return 0;
}

