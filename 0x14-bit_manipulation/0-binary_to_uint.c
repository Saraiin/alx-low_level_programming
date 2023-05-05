#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is invalid or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unitnum = 0;
	
	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			unitnum <<= 1;
			if (*b == '1')
				unitnum += 1;
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (unitnum);
}
