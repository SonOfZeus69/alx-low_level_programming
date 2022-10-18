#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabetsx10
 *
 * Return: Always return 0 (Success)
 */

void print_alphabet_x10(void)
{
char a;
int i = 0;

while (i < 10)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a + '0');
}
i++;
}
_putchar('\n');
}
