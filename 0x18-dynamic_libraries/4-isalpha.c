#include "main.h"

/**
 * _isalpha - checks if the inputted character is in upppercase
 * @c: the letter being used to test
 * Return: Always return 0 (Success)
 */

int _isalpha(int c)
{
if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
{
return (1);
}
else
{
return (0);
}
}
