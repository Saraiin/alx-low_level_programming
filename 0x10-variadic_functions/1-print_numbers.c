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

	if (n == 0)
		return;
	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%i", va_arg(l, int));
		else
			printf("%s%i", separator, va_arg(l, int));
	}
	printf("\n");
	va_end(l);
}
