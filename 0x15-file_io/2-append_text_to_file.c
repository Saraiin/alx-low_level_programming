#include "main.h"
/**
 * _strlen - length of stringg
 * @s: string
 * Return: length of string
 */
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text to append
 * Return: 1 success and -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptfile;
	ssize_t ln;

	ptfile = open(filename, O_WRONLY | O_APPEND);
	if (ptfile == -1)
		return (-1);
	if (text_content != NULL)
		ln = write(ptfile, text_content, _strlen(text_content));
	close(ptfile);
	if (ln == -1)
		return (-1);
	return (1);
}


