#include <cs50.h>
#include <stdio.h>

bool prime(int number);
int main(void)
{
    int Number = get_int("Number: ");

    if (prime(Number))
    {
        printf("The given number is a prime\n");
    }
    else
    {
        printf("The given  number is not a prime\n");
    }
}

bool prime(int number)
{
    if (number <= 1)
    {
        return false;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
