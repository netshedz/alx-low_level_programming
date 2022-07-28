#include <unistd.h>

/**
 * _putchat - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1.
 * on error, -1 is returned, and error is sedt approprietly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
