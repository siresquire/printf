#include "main.h"

/**
 * printnoct - prints in octal begining with zero
 * @l: input number
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of char printed.
 */
int printnoct(va_list l, char *b, unsigned int ib)
{
	int i, j, g, fd, var_input;
	char *oct, *bin;

	var_input = va_arg(l, int);
	g = 0;
	if (var_input == 0)
	{
		ib = handl_buf(b, '0', ib);
		return (1);
	}
	if (var_input < 0)
	{
		var_input = (var_input * -1) - 1;
		g = 1;
	}
	ib = handl_buf(b, '0', ib);
	bin = malloc(sizeof(char) * (32 + 1));
	bin = fill_binary_array(bin, var_input, g, 32);
	oct = malloc(sizeof(char) * (11 + 1));
	oct = fill_oct_array(bin, oct);
	for (fd = i = j = 0; oct[i]; i++)
	{
		if (oct[i] != '0' && fd == 0)
			fd = 1;
		if (fd)
		{
			ib = handl_buf(b, oct[i], ib);
			j++;
		}
	}
	free(bin);
	free(oct);
	return (j + 1);
}
