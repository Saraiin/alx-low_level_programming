#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * closefile - close a file descriptor and print an error message upon failure
 * @filep: the file descriptor to close
 */
void closefile(int filep)
{
	if (close(filep) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close file\n", 22);
	exit(98);
}
/**
 * readf - read from a file and print an error message upon failure
 * @fd: the file descriptor to read from
 * @buff: the buffer to write to
 * @nb: the number of bytes to read
 */
void readf(int fd, char *buf, size_t nb)
{
	if (read(fl, buff, nb) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	closefile(fd);
	exit(98);
}
/**
 * nstcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the max number of bytes to compare
 *
 * Return: 0 if the first n bytes of s1 and s2 are equal, otherwise non-zero
 */
int nstcmp(const char *s1, const char *s2, size_t n)
{
	for ( ; n && *s1 && *s2; --n, ++s1, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (n)
	{
		if (*s1)
			return (1);
		if (*s2)
			return (-2);
	}
	return (0);
}

