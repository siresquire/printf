#include "main.h"

/**
 * prinloct - prints long decimal in octal
 * @arguments: list of arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of char printed.
 */
int prinloct(va_list arguments, char *buf, unsigned int ibuf)
{
	long int i, j, g, fd, var_input;
	char *oct, *bin;

	var_input = va_arg(arguments, long int);
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
	oct = malloc(sizeof(char) * (22 + 1));
	oct = fill_oct_array(bin, oct);
	for (fd = i = j = 0; oct[i]; i++)
	{
		if (oct[i] != '0' && fd == 0)
			fd = 1;
		if (fd)
		{
			ibuf = handl_buf(buf, oct[i], ibuf);
			j++;
		}
	}
	free(bin);
	free(oct);
	return (j);
}
