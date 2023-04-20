#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: separator string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
	printf("%i%s\n", va_arg(l, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(l);
	printf("\n");
}
