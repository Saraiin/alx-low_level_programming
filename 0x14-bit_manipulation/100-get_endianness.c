#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 if little, 0 if big
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &c;

	return ((int) *c);
}
