#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 if little, 0 if big
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *endian = (char *) &number;

	return ((int) *endian);
}
