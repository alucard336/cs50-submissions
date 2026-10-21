#include <cs50.h>
#include <stdio.h>

int calculate_cents25(int cash);
int calculate_cents10(int cash);
int calculate_cents5(int cash);
int calculate_cents1(int cash);
int main(void)
{
    int cash;
    do
    {
        cash = get_int("Change owed: ");
    }
    while (cash <= 0);
    int cents25 = calculate_cents25(cash);
    cash = cash - (cents25 * 25);
    int cents10 = calculate_cents10(cash);
    cash = cash - (cents10 * 10);
    int cents5 = calculate_cents5(cash);
    cash = cash - (cents5 * 5);
    int cents1 = calculate_cents1(cash);
    cash = cash - (cents1 * 1);
    printf("Number of 25 cents= %i\n", cents25);
    printf("Number of 10 cents= %i\n", cents10);
    printf("Number of 5 cents= %i\n", cents5);
    printf("Number of 1 cents= %i\n", cents1);
}

int calculate_cents25(int cash)
{
    int cents25 = 0;
    while (cash >= 25)
    {
        cents25++;
        cash = cash - 25;
    }
    return cents25;
}

int calculate_cents10(int cash)
{
    int cents10 = 0;
    while (cash >= 10)
    {
        cents10++;
        cash = cash - 10;
    }
    return cents10;
}

int calculate_cents5(int cash)
{
    int cents5 = 0;
    while (cash >= 5)
    {
        cents5++;
        cash = cash - 5;
    }
    return cents5;
}

int calculate_cents1(int cash)
{
    int cents1 = 0;
    while (cash >= 1)
    {
        cents1++;
        cash = cash - 1;
    }
    return cents1;
}
