#include "main.h"

/**
 * printpint - print integer with plus symbol
 * @l: list of arguments
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of char printed
 */
int printpint(va_list l, char *b, unsigned int ib)
{
	int var_input;
	unsigned int i, j, k, d;

	i = va_arg(l, int);
	if (var_input < 0)
	{
		i = var_input * -1;
		ib = handl_buf(b, '-', ib);
	}
	else
	{
		i = var_input;
		ib = handl_buf(b, '+', ib);
	}
	j = i;
	d = 1;
	while (j > 9)
	{
		d *= 10;
		j /= 10;
	}
	for (k = 0; d > 0; d /= 10, k++)
		ib = handl_buf(b, ((i / d) % 10) + '0', ib);
	return (k + 1);
}
