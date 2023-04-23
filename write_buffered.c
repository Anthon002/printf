#include "main.h"

/**
 * _write_buffered - writes a character buffer to stdout
 * @buffer: the buffer containing the characters to write
 * @buf_size: the size of the buffer
 * Return: the number of characters written
 */
int _write_buffered(char *buffer, int buf_size)
{
	int i, num_written = 0;

	for (i = 0; i < buf_size; i++)
	{
		_putchar(buffer[i]);
		num_written++;
	}

	return num_written;
}

