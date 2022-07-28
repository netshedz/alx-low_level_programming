#include "main.h"

/**
 * _islower -> checks if the character is lowercase
 * @c: a character argument
 * Return: Always 1 (success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
return (0);
}
