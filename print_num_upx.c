#include <main.h>

/**
 * prinnupx - prints number in uppercase hexexadecimal
 * @arguments: list of arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of char printed
 */
int prinnupx(va_list arguments, char *buf, unsigned int *ibuf)
{
	int i, j, fd, g, var_input;
	char *hexa, *bin;

	var_input = (va_arg(arguments, int));
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
	ibuf = handl_buf(buf, '0', ibuf);
	ibuf = handl_buf(buf, 'x', ibuf);
	bin = malloc(sizeof(char) * (32 + 1));
	bin = fill_binary_array(bin, var_input, g, 32);
	hexa = malloc(sizeof(char) * (8 + 1));
	hexa = fill_hex_array(bin, hexa, 1, 8);
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
