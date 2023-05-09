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
 * @buf: the buffer to write to
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
/**
 * magicelf - print ELF magic
 * @buffer: the ELF header
 */
void magicelf(const unsigned char *buffer)
{
	unsigned int i;

	if (nstcmp((const char *) buffer, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}
	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 16; ++i)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}
/**
 * clasself - print ELF class
 * @buffer: the ELF header
 *
 * Return: bit mode (32 or 64)
 */
size_t clasself(const unsigned char *buffer)
{
	printf("  %-34s ", "Class:");
	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buffer[EI_CLASS]);
	return (32);
}
/**
 * dataelf - print ELF data
 * @buffer: the ELF header
 *
 * Return: 1 if big endian, otherwise 0
 */
int dataelf(const unsigned char *buffer)
{
	printf("  %-34s ", "Data:");
	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}
/**
 * versionelf - print ELF version
 * @buffer: the ELF header
 */
void versionelf(const unsigned char *buffer)
{
	printf("  %-34s %u", "Version:", buffer[EI_VERSION]);
	if (buffer[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
 * osabielf - print ELF OS/ABI
 * @buffer: the ELF header
 */
void osabielf(const unsigned char *buffer)
{
	const char *os_table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"
	};
	printf("  %-34s ", "OS/ABI:");
	if (buffer[EI_OSABI] < 19)
		printf("%s\n", os_table[(unsigned int) buffer[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buffer[EI_OSABI]);
}

