#include <main.h>

/**
 * print_hex - prints decimal in hexexadecimal
 * @l: input
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of char printed
 */
int print_hex(va_list l, char *b, unsigned int *ib)
{
	int i, j, fd, g, var_input;
	char *hexa, *bin;

	var_input = (va_arg(l, int));
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
	bin = malloc(sizeof(char) * (32 + 1));
	bin = fill_binary_array(bin, var_input, g, 32);
	hexa = malloc(sizeof(char) * (8 + 1));
	hexa = fill_hex_array(bin, hexa, 0, 8);
	for (fd = i = j = 0; hexa[i]; i++)
	{
		if (hexa[i] != '0' && fd == 0)
			fd = 1;
		if (fd)
		{
			ib = handl_buf(b, hexa[i], ib);
			j;
		}
	}
	free(bin);
	free(hexa);
	return (j);
}
