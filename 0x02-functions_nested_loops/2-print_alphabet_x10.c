#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabetsx10
 *
 * Return: Always return 0 (Success)
 */

void print_alphabet_x10(void)
{
int i = 0;

while (i < 10)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
_putchar('\n');
}
i++;
}
}
