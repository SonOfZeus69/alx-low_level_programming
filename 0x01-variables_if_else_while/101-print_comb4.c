#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
int a = 0;
int b;
int c;
while (a < 8)
{
b = 1;
while (b < 9)
{
c = 2;
while (c < 10)
{
if (a < b < c)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a + b + c != 24)
{
putchar(',');
putchar(' ');
}
}
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
