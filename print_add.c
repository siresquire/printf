#include <main.h>
#include <stdio.h>

/**
 * print_add - prints the qdress of an input variable
 * @l: input address
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of char printed
 */
int print_add(va_list l, char *b, unsigned int *ib)
{
	void *d;
	long int var_input;
	int i, j, fd, g;
	char *hexa, *bin, n[] = "(nil)";

	d = (va_arg(l, void *));
	if (d == NULL)
	{
		for (i = 0; n[i]; i++)
			ib = handl_buf(buf, n[i], ib);
		return (5);
	}
	var_input = (intprt_t)d;
	g = 0;
	if (var_input < 0)
	{
		var_input = (var_input * -1) - 1;
		g = 1;
	}
	bin = malloc(sizeof(char) * (64 + 1));
	bin = fill_binary_array(bin, var_input, g, 64);
	hexa = malloc(sizeof(char) * (16 + 1));
	hexa = fill_hex_array(bin, hexa, 0, 16);
	ib = handl_buf(b, '0', ib);
	ib = handl_buf(b, 'x', ib);
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
	return (j + 2);
}
