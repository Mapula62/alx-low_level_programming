#include <stdlib.h>
#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
ssize_t b = 0;
ssize_t len = _strlen(text_content);
int n;
if (!filename)
return (-1);
n = open(filename, 0_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (n == -1)
return (-1);
if (len)
b = write(n, text_content, len);
close(n);
return (b == len ? 1 : -1);
}
