/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int test = 1;
	int i, s = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & test)
		{
			_putchar('1');
			s = 1;
		}
		else if (s)
			_putchar('0');
	}
	if (!s)
		_putchar('0');
}
