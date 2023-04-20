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
	for (i = 0; i < n - 1; i++)
	{
		if (!separator)
			printf("%i", va_arg(l, int));
		else
			printf("%i%s", va_arg(l, int), separator);
	}
	printf("%i\n", va_arg(l, int));
	va_end(l);
}
