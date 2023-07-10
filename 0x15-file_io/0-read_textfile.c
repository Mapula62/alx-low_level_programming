#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: is the name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters, if NULL then 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t b;
int n;
char buf[READ_BUF_SIZE * 8];
if (!filename || !letters)
return (0);
n = open(filename, O_RDONLY);
if (n == -1)
return (0);
b = read(n, &buf[0], letters);
b = write(STDOUT_FILENO, &buf[0], b);
close(n);
return (b);
}
