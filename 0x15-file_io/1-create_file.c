#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
ssize_t b;
ssize_t j = 0;
int n;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (j = 0; text_content[j];)
j++;
}
b = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
n = write(b, text_content, j);
if (b == -1 || n == -1)
return (-1);
close(b);
return (1);
}
