#include "variadic_function.h"

/**
 * print_numbers -  prints number
 * @separator: string to be printed betwen numbers
 * @n: number of intergers passed to the fun ction
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
