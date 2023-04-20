#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: separator string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, elmt;
	va_list l;

	if (n == 0)
		return;
	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		elmt = va_arg(l, int);
		if (!separator)
			printf("%d", elmt);
		else
			printf("%s%d", separator, elmt);
	}
	printf("\n");
	va_end(l);
}
