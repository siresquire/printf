#include "main.h"
/**
 * printlunt - prints a long unsigned integer
 * @l: number to print
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of chars printed.
 */
int printlunt(va_list l, char *b, unsigned int ib)
{
	unsigned long int i, j, k, d;

	i = va_arg(l, unsigned long int);
	j = i;
	d = 1;
	while (j > 9)
	{
		d *= 10;
		j /= 10;
	}
	for (k = 0; d > 0; d /= 10, k++)
		ib = handl_buf(b, ((i / d) % 10) + '0', ib);
	return (k);
}
