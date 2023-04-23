#include "main.h"

/**
 * _write_buffered - writes a character buffer to stdout
 * @buffer: the buffer containing the characters to write
 * @buf_size: the size of the buffer
 *
 * Return: the number of characters written
 */
int _write_buffered(char *buffer, int buf_size)
{
	static char write_buf[1024];
	static int buf_index = 0;
	int i, num_written = 0;

	for (i = 0; i < buf_size; i++)
	{
		write_buf[buf_index++] = buffer[i];
		if (buf_index == 1024)
		{
			num_written += write(1, write_buf, 1024);
			buf_index = 0;
		}
	}

	return num_written;
}

