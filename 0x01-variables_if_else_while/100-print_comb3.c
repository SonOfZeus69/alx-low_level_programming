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
for (b; b < 10; b++)
{
if (b != a && b > a)
{
putchar(a + '0');
putchar(b + '0');
if (('a' + 'b') != '89')
{
putchar(',');
putchar(' ');
}
}
a++
}
putchar('\n');
return (0);
}
}
