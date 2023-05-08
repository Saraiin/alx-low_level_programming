#include "main.h"
/**
 * create_file - create file and write content
 * @filename: name of file
 * @text_content: write content
 * Retuen: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int ptfile;
	ssize_t ln = 0, charwrite = 0;

	if (filename == NULL)
		return (-1);
	for (ln = 0; text_content[ln]; ln++)
		;
	ptfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ptfile == -1)
		return (-1);
	if (text_content != NULL)
		charwrite = write(ptfile, text_content, ln);
	close(ptfile);
	if (charwrite == -1)
		return (-1);
	return (1);
}
