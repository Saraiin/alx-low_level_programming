#include "main.h"
/**
 *more_numbers - print 10 times the numbers from 0 to 14
 *
 *Return: void.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = '0'; i <= '14'; i++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
