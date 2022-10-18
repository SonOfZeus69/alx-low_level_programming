#include "main.h"

/**
 * print_sign - prints the sign of an inputted number
 * @n: characted being used to test
 * Return: Always return 0 (Success)
 */

int print_sign(int n)
{
if (n == 0)
{
_putchar(n + '0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
