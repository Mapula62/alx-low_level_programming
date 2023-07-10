#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define USAGE "Usage: cp file_from file_to\n"
#define PERMISSIONS (S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - a program that copies the content of a file to another file
 * @argc: input argument count
 * @argv: input argument vector
 * Return: 1 success 0 if failure
 */
int main(int argc, char **argv)
{
ssize_t w;
char buf[READ_BUF_SIZE];
int from = 0, to = 0;
if (argc != 3)
dprintf(STDERR_FILENO, USAGE), exit(97);
from = open(argv[1], O_RDONLY);
if (from == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (to == -1)
dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
while ((w = read(from, buf, READ_BUF_SIZE)) > 0)
if (write(to, buf, w) != w)
dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
if (w == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
from = close(from);
to = close(to);
if (from)
dprintf(STDERR_FILENO, ERR_NOCLOSE, from), exit(100);
if (to)
dprintf(STDERR_FILENO, ERR_NOCLOSE, from), exit(100);
return (EXIT_SUCCESS);
}
