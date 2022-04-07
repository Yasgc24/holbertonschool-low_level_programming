#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers to characters
 * Return: 0
 */

int main(int argc, char **argv)
{
int file1, readfile = 1024, file2, writefile;
char *buffer = (char *)malloc(sizeof(char) * 1024);
int closefile1, closefile2;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file1 = open(argv[1], O_RDONLY);

while (readfile == 1024)
{
readfile = read(file1, buffer, 1024);
if (buffer == NULL || file1 == -1 || readfile == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
writefile = write(file2, buffer, readfile);
if (writefile == -1 || file2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
free(buffer);
}
closefile1 = close(file1);
closefile2 = close(file2);

if (closefile1 == -1 || closefile2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", (closefile1 == -1) ? file1 : file2);
exit(100);
}
return (0);
}
