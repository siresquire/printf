#include "main.h"

/**
 * print_bnr - prints decimal in binary
 * @l: input string
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of chars printed.
 */
int print_bnr(va_list l, char *b, unsigned int ib)
{
	int var_input, j, i, fo, g;
	char *bin;

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
		g = 1;														}
	bin = malloc(sizeof(char) * (32 + 1));
	bin = fill_binary_array(bin, var_input, g, 32);
	fo = 0;
	for (j = i = 0; bin[i]; i++)
	{
		if (fo == 0 && bin[i] == '1')
			fo = 1;
		if (fo == 1)
		{
			ib = handl_buf(b, bin[i], ib);
			j++;
		}
	}
	free(bin);
	return (j);
}
