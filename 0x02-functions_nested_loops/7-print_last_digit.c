#include "main.h"

/**
 * print_last_digit - prints the last digit of the inputted number
 * @c: letter being tested with
 * Return: Always return 0 (Success)
 */

int print_last_digit(int c)
{
int a;
if (c < 0)
{
c = -c;
a = c % 10;
}
if (a < 0)
{
a = -a;
_putchar(a + '0');
}
return (a);
}
