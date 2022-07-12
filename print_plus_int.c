#include "main.h"

/**
 * prinpint - print integer with plus symbol
 * @arguments: list of arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of char printed
 */
int prinpint(va_list arguments, char *buf, unsigned int ibuf)
{
	int var_input;
	unsigned int i, j, k, d;

	i = va_arg(arguments, int);
	if (var_input < 0)
	{
		i = var_input * -1;
		ibuf = handl_buf(buf, '-', ibuf);
	}
	else
	{
		i = var_input;
		ibuf = handl_buf(buf, '+', ibuf);
	}
	j = i;
	d = 1;
	while (j > 9)
	{
		d *= 10;
		j /= 10;
	}
	for (k = 0; d > 0; d /= 10, k++)
		ibuf = handl_buf(buf, ((i / d) % 10) + '0', ibuf);
	return (k + 1);
}
