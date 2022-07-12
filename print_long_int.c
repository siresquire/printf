#include "main.h"

/**
 * print_int - prints a long integer
 * l: list of argument
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of char printed
 */
int printlint(va_list l, char *b, unsigned int ib)
{
	long int var_input;
	unsigned long int i, j, k, d, g;
	var_input = va_arg(l, long int);
	g = 0;
	if (var_input < 0)
	{
		i = var_input * -1;
		ib = handl_buf(buf, '-', ib);
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
		ib = handl_buf(b, ((i / d) % 10) + '0', ib);
	return (k + g);
}
