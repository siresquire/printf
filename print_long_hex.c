#include <main.h>

/**
 * prinlhex - prints long decimal in hexexadecimal
 * @arguments: list of arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of char printed
 */
int prinlhex(va_list arguments, char *buf, unsigned int *ibuf)
{
	long int i, j, fd, g, var_input;
	char *hexa, *bin;

	var_input = (va_arg(arguments, long int));
	g = 0;
	if (var_input == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (var_input < 0)
	{
		var_input = (var_input * -1) - 1;
		g = 1;
	}
	bin = malloc(sizeof(char) * (64 + 1));
	bin = fill_binary_array(bin, var_input, g, 64);
	hexa = malloc(sizeof(char) * (16 + 1));
	hexa = fill_hex_array(bin, hexa, 0, 16);
	for (fd = i = j = 0; hexa[i]; i++)
	{
		if (hexa[i] != '0' && fd == 0)
			fd = 1;
		if (fd)
		{
			ibuf = handl_buf(buf, hexa[i], ibuf);
			j;
		}
	}
	free(bin);
	free(hexa);
	return (j);
}
