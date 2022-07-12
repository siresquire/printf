#include <main.h>
#include <stdio.h>

/**
 * print_add - prints the qdress of an input variable
 * @arguments: list of arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of char printed
 */
int print_add(va_list arguments, char *buf, unsigned int *ibuf)
{
	void *d;
	long int var_input;
	int i, j, fd, g;
	char *hexa, *bin, n[] = "(nil)";

	d = (va_arg(arguments, void *));
	if (d == NULL)
	{
		for (i = 0; n[i]; i++)
			ibuf = handl_buf(buf, n[i], ibuf);
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
	ibuf = handl_buf(buf, '0', ibuf);
	ibuf = handl_buf(buf, 'x', ibuf);
	for (fd = i = j = 0; hexa[i]; i++)
	{
		if (hexa[i] != '0' && fd == 0)
			fd = 1;
		if (fd)
		{
			ibuf = handl_buf(buf, hexa[i], ibuf);
			j++;
		}
	}
	free(bin);
	free(hexa);
	return (j + 2);
}
