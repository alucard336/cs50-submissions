#include <cs50.h>
#include <stdio.h>

void print_space(int count);
void print_row(int bricka);
int Height;
int main(void)
{
    do
    {
        Height = get_int("Height: ");
    }
    while (Height < 1 || Height > 8);

    for (int i = 0; i < Height; i++)
    {
        print_space(Height - i - 1);
        print_row(i + 1);
        printf("  ");
        print_row(i + 1);
        printf("\n");
    }
}

void print_space(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf(" ");
    }
}

void print_row(int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("#");
    }
}
