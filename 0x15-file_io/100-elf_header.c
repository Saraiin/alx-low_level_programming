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
