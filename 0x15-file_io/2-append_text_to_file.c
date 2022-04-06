#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file, writefile, count = 0;

if (filename == NULL)
{
return (-1);
}

file = open(filename, O_APPEND | O_WRONLY);
if (file == -1)
{
return (-1);
}

while (text_content && text_content[count])
count++;

writefile = write(file, text_content, count);
if (writefile == -1)
{
return (-1);
}
close(file);
return (1);
}
