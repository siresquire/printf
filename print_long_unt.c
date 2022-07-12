#include "main.h"
/**
 * prinlunt - prints a long unsigned integer
 * @arguments: list of arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int prinlunt(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned long int i, j, k, d;

	i = va_arg(arguments, unsigned long int);
	j = i;
	d = 1;
	while (j > 9)
	{
		d *= 10;
		j /= 10;
	}
	for (k = 0; d > 0; d /= 10, k++)
		ibuf = handl_buf(buf, ((i / d) % 10) + '0', ibuf);
	return (k);
}
