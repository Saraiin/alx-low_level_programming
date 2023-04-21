#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: separator string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separatot != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
