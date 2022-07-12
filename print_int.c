#include "main.h"

/**
 * print_int - prints an integer
 * @arguments: list of argument
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of char printed
 */
int print_int(va_list arguments, char *buf, unsigned int ibuf)
{
	int var_input;
	unsigned int i, j, k, d, g;

	var_input = va_arg(arguments, int);
	g = 0;
	if (var_input < 0)
	{
		i = var_input * -1;
		ibuf = handl_buf(buf, '-', ibuf);
		g = 1;
	}
	else
		i = var_input;
	j = i;
	d = 1;
	while (j > 9)
	{
		d *= 10;
		j /= 10;
	}
	for (k = 0; d > 0; d /= 10, k++)
		ibuf = handl_buf(buf, ((i / d) % 10) + '0', ibuf);
	return (k + g);
}
