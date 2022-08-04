#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parametedr on each elememt of an array
 * @array: input integer array
 * @size: size of an array
 * @action: poin ter to function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
