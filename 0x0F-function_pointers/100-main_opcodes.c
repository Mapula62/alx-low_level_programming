#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints the opcodes of its own
 * @argc: number of argument
 * @argv: an array of pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
unsigned char opcode;
int bytes, index;
int (*address)(int, char **) = main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
for (index = 0; index < bytes; index++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);
if (index == bytes - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}
