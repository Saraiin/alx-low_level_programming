#include <unistd.h>
/**
 * _putchar - writes char
 * @c: char
 * Return: 1 on success, -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
