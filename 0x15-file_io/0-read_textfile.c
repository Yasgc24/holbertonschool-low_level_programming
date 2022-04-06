#include "main.h"

/**
 * read_textfile -  reads a text file and prints
 * it to the POSIX standard output
 * @filename: file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int file, readfile, writefile;

buffer = (char *)malloc(sizeof(char) * letters);
if (filename == NULL)
{
return (0);
}

file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
readfile = read(file, buffer, letters);
if (readfile == -1)
{
return (0);
}

writefile = write(STDOUT_FILENO, buffer, readfile);
if (writefile == -1)
{
return (0);
}
close(file);
return (writefile);
}
