#include "main.h"
/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: Always return 0 (Success)
 */

void print_alphabet(void)
{
char i = 'a';

while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
