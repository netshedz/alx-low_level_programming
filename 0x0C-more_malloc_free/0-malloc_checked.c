#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: bytes allocates
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
