#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
int a = 0;
int b = 1;
while (a < 9)
{
while (b < 10)
{
if (b != a && b > a)
{
putchar(a + '0');
putchar(b + '0');
if ((a + b) != 17)
{
putchar(',');
putchar(' ');
}
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
