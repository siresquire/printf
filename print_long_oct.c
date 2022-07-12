#include "main.h"

/**
 * printloct - prints long decimal in octal
 * @l: input number
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of char printed.
 */
int printloct(va_list l, char *b, unsigned int ib)
{
	long int i, j, g, fd, var_input;
	char *oct, *bin;

	var_input = va_arg(l, long int);
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
	bin = malloc(sizeof(char) * (64 + 1));
	bin = fill_binary_array(bin, var_input, g, 64);
	oct = malloc(sizeof(char) * (22 + 1));
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
	return (j);
}
